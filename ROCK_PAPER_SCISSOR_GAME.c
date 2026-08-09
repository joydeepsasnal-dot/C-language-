#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int user, computer;

    srand (time(0));

    printf("=======START THE GAME=======");
    printf("\n Choose your Option \n");
    printf("1.Rock\n");
    printf("2.Paper\n");
    printf("3.Scissor\n");


    computer = rand() % 3 + 1;

    printf("\nYour Choice : ");
    scanf("%d", &user);

    if(user == 1){
        printf("Rock\n");
    }else if(user == 2){
        printf("Paper\n");
    }else{
        printf("Scissor\n");
        return 0;
    }

    printf("Computer Choose \n");

    if(computer == 1){
        printf("Rock\n");
    }else if(computer == 2){
        printf("Paper\n");
    }else{
        printf("Scissor\n");
    }

    if(computer == user){
        printf("Match DRAW 🤝\n");\
    }
    else if((user == 1 && computer == 3) ||
            (user == 3 && computer == 2) ||
            (user == 2 && computer == 1)){
                printf("YOU WIN\n");
    }else{
        printf("COMPUTER WIN");
    }


    printf("THANKS FOR PLAYING MY GAME");
    return 0;
}



    


    
