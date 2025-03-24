#include<stdio.h>

int main()
{
    int a,b;
    char c[50];

    printf("Enter name roll and year: \n");
    scanf("%50[^\n] %d %d",&c,&a,&b);

    printf("\nName :%s\nRoll :%d\nHSC passing year :%d",c,a,b);

    return 0;
}
