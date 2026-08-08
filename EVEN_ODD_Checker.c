#include<stdio.h>
int main(){
    printf("=======EVEN or ODD checker=======\n");

    int num;
    printf("Enter your Number : \n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is an Even number\n", num);
    } else {
        printf("%d is an Odd number \n", num); 
    }
    return 0;




}