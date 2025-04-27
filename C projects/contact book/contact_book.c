#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

struct Contact contacts[MAX_CONTACTS];
int contactCount = 0;

int main() {
    int choice;

    FILE *file = fopen("contacts.txt", "r");
    if (file != NULL) {
    while (fscanf(file, "%s %s %s", contacts[contactCount].name, contacts[contactCount].phone, contacts[contactCount].email) == 3) {
        contactCount++;
    }
    fclose(file);
}

    while (1) {  // Loop forever until user exits
        printf("\n--- Contact Book Menu ---\n");
        printf("1. Add New Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);

        if (choice == 1) {
            // Add new contact
            if (contactCount < MAX_CONTACTS) {
                printf("Enter Name: ");
                scanf("%s", contacts[contactCount].name);
                printf("Enter Phone: ");
                scanf("%s", contacts[contactCount].phone);
                printf("Enter Email: ");
                scanf("%s", contacts[contactCount].email);
                
                FILE *file = fopen("contacts.txt", "a");  // 'a' for append mode
                if (file != NULL) {
                   fprintf(file, "%s %s %s\n", contacts[contactCount].name, contacts[contactCount].phone, contacts[contactCount].email);
                      fclose(file);
                } else {
                printf("Error saving contact to file.\n");
                }

                contactCount++;
                printf("Contact added!\n");
            } else {
                printf("Contact book is full!\n");
            }
        } else if (choice == 2) {
            // View all contacts
            if (contactCount == 0) {
                printf("No contacts yet.\n");
            } else {
                for (int i = 0; i < contactCount; i++) {
                    printf("\nContact #%d\n", i+1);
                    printf("Name: %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    printf("Email: %s\n", contacts[i].email);
                }
            }
        } else if (choice == 3) {
            // Exit the program
            printf("Exiting Contact Book...\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;  // End the program correctly
}
