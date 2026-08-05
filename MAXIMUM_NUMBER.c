#include<stdio.h>
int maximum(int a , int b){
    if(a<b){
        return b;

    }else {
        return a;
    }

}
int main(){
    int x, y;
    printf("Enter two numbers :");
    scanf("%d %d", &x,&y);
    printf("Maximum Number is : %d", maximum (x,y));
    return 0;


}