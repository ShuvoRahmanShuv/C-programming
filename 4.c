#include <stdio.h>

void stu(char name[], int age, int roll, float ssc, float hsc);

int main() {
    char name[100];
    int age;
    int roll;
    float ssc;
    float hsc;
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
    stu(name, age, roll, ssc, hsc);
    return 0;
}

void stu(char name[], int age, int roll, float ssc, float hsc) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Roll: %d\n", roll);
    printf("SSC Result: %.2f\n", ssc);
    printf("HSC Result: %.2f\n", hsc);
}
