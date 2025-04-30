#include <stdio.h>
#include <string.h>

struct Task {
    char name[100];
    int isCompleted;
};

// Load tasks from file
int loadTasks(struct Task tasks[], int maxTasks) {
    FILE *file = fopen("tasks.txt", "r");
    if (file == NULL) {
        return 0;
    }

    int count = 0;
    while (fscanf(file, "%d %[^\n]", &tasks[count].isCompleted, tasks[count].name) == 2) {
        count++;
        if (count >= maxTasks) break;
    }

    fclose(file);
    return count;
}

// Save tasks to file
void saveTasks(struct Task tasks[], int count) {
    FILE *file = fopen("tasks.txt", "w");
    if (file == NULL) {
        printf("Error saving tasks!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s\n", tasks[i].isCompleted, tasks[i].name);
    }

    fclose(file);
}

int main() {
    struct Task tasks[100];
    int taskCount = loadTasks(tasks, 100);

    while (1) {
        printf("\n📋 Todo List:\n");
        for (int i = 0; i < taskCount; i++) {
            printf("%d. [%c] %s\n", i + 1, tasks[i].isCompleted ? 'X' : ' ', tasks[i].name);
        }

        printf("\n1. Add Task\n2. Mark as Done\n3. Save & Exit\n4. Delete Task\n5. Sort Tasks\nChoose option: ");
        int choice;
        scanf("%d", &choice);
        getchar(); // clear newline

        if (choice == 1) {
            if (taskCount >= 100) {
                printf("Task list full!\n");
                continue;
            }
            printf("Enter task name: ");
            fgets(tasks[taskCount].name, sizeof(tasks[taskCount].name), stdin);
            tasks[taskCount].name[strcspn(tasks[taskCount].name, "\n")] = '\0';
            tasks[taskCount].isCompleted = 0;
            taskCount++;
        }

        else if (choice == 2) {
            int num;
            printf("Enter task number to mark as done: ");
            scanf("%d", &num);
            getchar();
            if (num < 1 || num > taskCount) {
                printf("Invalid task number!\n");
            } else {
                tasks[num - 1].isCompleted = 1;
                printf("✅ Marked as done!\n");
            }
        }

        else if (choice == 3) {
            saveTasks(tasks, taskCount);
            printf("💾 Tasks saved. Goodbye!\n");
            break;
        }

        else if (choice == 4) {
            int num;
            printf("Enter task number to delete: ");
            scanf("%d", &num);
            getchar();
            if (num < 1 || num > taskCount) {
                printf("Invalid task number!\n");
            } else {
                for (int i = num - 1; i < taskCount - 1; i++) {
                    tasks[i] = tasks[i + 1];
                }
                taskCount--;
                printf("❌ Task deleted.\n");
            }
        }

        else if (choice == 5) {
            for (int i = 0; i < taskCount - 1; i++) {
                for (int j = i + 1; j < taskCount; j++) {
                    if (tasks[i].isCompleted > tasks[j].isCompleted) {
                        struct Task temp = tasks[i];
                        tasks[i] = tasks[j];
                        tasks[j] = temp;
                    }
                }
            }
            printf("📂 Tasks sorted (incomplete first).\n");
        }

        else {
            printf("❗ Invalid choice. Try again.\n");
        }
    }

    return 0;
}
