#include <stdio.h>

void scan();
void print();

char name[100];
int age, roll;
float ssc, hsc;

int main() {
    scan();
    print();
    return 0;
}

void scan() {
    printf("Enter Your name: ");
    gets(name);
    printf("Enter Your age: ");
    scanf("%d", &age);
    printf("Enter Your roll number: ");
    scanf("%d", &roll);
    printf("Enter Your SSC score: ");
    scanf("%f", &ssc);
    printf("Enter Your HSC score: ");
    scanf("%f", &hsc);
}

void print() {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Roll Number: %d\n", roll);
    printf("SSC Score: %.2f\n", ssc);
    printf("HSC Score: %.2f\n", hsc);
}
