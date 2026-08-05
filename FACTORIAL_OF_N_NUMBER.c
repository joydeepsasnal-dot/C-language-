#include<stdio.h>

int Factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }else{
        return n * Factorial(n-1);
    }
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Factorial of %d = %d",num,Factorial(num));
    return 0;
}
