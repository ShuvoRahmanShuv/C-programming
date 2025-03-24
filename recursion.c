#include <stdio.h>
int sum(int start, int end);
int main(){
    int result = sum(1,10);
    printf("%d", result);
    return 0;    
}
int sum(int start, int end){
if(start<=end){
    return start + sum(start + 1, end);
}
else {
    return 0;
}
}