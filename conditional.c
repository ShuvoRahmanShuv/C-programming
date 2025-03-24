#include<stdio.h>
int main(){

int day = 4;

switch (day) {
  case 6:
    printf("Today is Saturday");
    break;
  case 7:
    printf("Today is Sunday");
    break;
  default:
    printf("Looking forward to the Weekend\n\n");
}
int a = 10;
if (a = 11)
    printf("I am 11\n");
else
    printf("I am not 11\n");

int marks1, marks2, marks3;
printf("enter marks1: \n");
scanf("%d", &marks1);
printf("enter marks2: \n");
scanf("%d", &marks2);
printf("enter marks3: \n");
scanf("%d", &marks3);
printf("the marks are: %d% d and %d\n", marks1, marks2, marks3);
if (marks1<33 || marks2<33 || marks3<33){
    printf("You are failed due to less marks in individual subject(s)");
}
else if ((marks1 + marks2 + marks3)/3 <40){
    printf("you are failed due to less percantage");
}
else{
    printf("You are passed");}
return 0;

}

