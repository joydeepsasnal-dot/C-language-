#include<stdio.h>
int main (){
    int n ;
    printf("Enter the number :  \n");
    scanf("%d", &n);
    printf("The number is : %d", n);

    for(int i =0; i<=10; i++){
        printf("\n%d * %d = %d", n, i, n*i);
    }
    return 0;
}