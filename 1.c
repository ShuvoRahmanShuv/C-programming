#include <stdio.h>
int main()
{
    char Name[50] = "MD. Mamunur Rahman Shuvo";
    int Age = 19;
    int Height1 = 5;
    int Height2 = 6;
    int Roll = 250121055;
    printf("Name : %s \n", Name);
    printf("Age : %d \n", Age);
    printf("Height : %d Feet and %d Inch\n", Height1, Height2);
    printf("Roll : %d \n", Roll);
    float SSC_GPA = 3.89;
    float HSC_GPA = 4.17;
    float Result = (SSC_GPA + HSC_GPA);
    printf("Total GPA : %.2f", Result);
    return 0;
}
