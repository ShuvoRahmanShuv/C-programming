#include <stdio.h>

int validate_marks(int marks) {
    if (marks >= 0 && marks <= 100) {
        return 1;
    }
    return 0;
}

char calculate_grade(int total_marks) {
    if (total_marks >= 90) {
        return 'A';
    } else if (total_marks >= 80) {
        return 'B';
    } else if (total_marks >= 70) {
        return 'C';
    } else if (total_marks >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int num_students, i, j, marks, total_marks;
    char grade;

    while (1) {
        printf("Menu:\n");
        printf("1. Calculate marks and grades for students\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);

        if (choice == 2) {
            break;
        }

        printf("Enter the number of students: ");
        scanf("%d", &num_students);

        for (i = 0; i < num_students; i++) {
            total_marks = 0;
            printf("Enter marks for student %d:\n", i + 1);

            for (j = 0; j < 5; j++) {
                printf("Subject %d: ", j + 1);
                scanf("%d", &marks);

                while (!validate_marks(marks)) {
                    printf("Invalid marks. Please enter marks between 0 and 100: ");
                    scanf("%d", &marks);
                }

                total_marks += marks;
            }

            grade = calculate_grade(total_marks / 5);
            printf("Total Marks: %d, Grade: %c\n", total_marks, grade);
        }
    }

    return 0;
}

