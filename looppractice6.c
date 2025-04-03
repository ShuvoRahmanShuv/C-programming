 #include <stdio.h>
int main(){
    int i = 1, fact = 1, n = 4;
    while (i <= n){
        fact *= i;
        i++;
    }
    printf("The factorial of %d is %d\n", n, fact);
return 0;
} 