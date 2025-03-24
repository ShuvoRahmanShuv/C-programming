#include<stdio.h>

int main()

{

float redius,area,pi=3.1416;

printf("Enter the radius : ");

scanf("%f",&redius);

area=pi*redius*redius;

printf("\nArea is : %.2f",area);


if(area<5){printf("\nyes\n");}

else

{printf("\nNo\n");}

return 0;

}
