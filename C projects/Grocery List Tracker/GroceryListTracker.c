#include <stdio.h>
#include <string.h>

struct Item {
    char name[100];
    int quantity;
};

int main() {
    struct Item items[50];
    int n;

    printf("How many items? ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Enter item %d name: ", i + 1);
        fgets(items[i].name, sizeof(items[i].name), stdin);
        items[i].name[strcspn(items[i].name, "\n")] = '\0';

        printf("Enter quantity: ");
        scanf("%d", &items[i].quantity);
        getchar();
    }

    int total = 0;

    printf("\n🛒 Grocery List:\n");


    FILE *file = fopen("grocery_list.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d. %s - %d", i + 1, items[i].name, items[i].quantity);

        if (items[i].quantity >= 10) {
            printf(" (Bulk!)");
            fprintf(file, "%d. %s - %d (Bulk!)\n", i + 1, items[i].name, items[i].quantity);
        } else {
            printf(" (Regular)");
            fprintf(file, "%d. %s - %d (Regular)\n", i + 1, items[i].name, items[i].quantity);
        }

        printf("\n");
        total += items[i].quantity;
    }

    printf("\nTotal items in list: %d\n", total);
    fprintf(file, "\nTotal items in list: %d\n", total);

    fclose(file);

    printf("✅ Grocery list saved to grocery_list.txt\n");

    return 0;
}
