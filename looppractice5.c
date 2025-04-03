/*#include <stdio.h>
int main(){
    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum += (8*i);
    }    
    printf("The sum of the table of 8 is %d\n", sum);
return 0;
}*/


//factorial of a number:
 #include <stdio.h>
int main(){
    int fact = 1, n = 4;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    printf("The factorial of %d is %d\n", n, fact);
return 0;
} 