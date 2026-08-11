#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

#define GREEN "\033[32m"
#define RED "\033[30m"
#define YELLOW "\033[33m"
#define VIOLET "\033[36m"
#define BLUE "\033[34m"
#define RESET "\033[0m"


int main(){
    int number,useranswer;
    int level = 1;
    int score = 0;


    srand(time(0));

    printf(VIOLET);
    printf("==================================\n");
    printf("    👽 NUMBER MEMEORY GAME 👽    \n");
    printf("====================================");
    printf(RESET);


    printf("\n Remember The number Show in screen\n");
    printf("The number will be disappeare in 3 seconds\n");

    while(1){
        int min = 1;
        int max = 9;

        for(int i = 1; i<level; i++){
            min = min * 10;
            max = max * 10 + 9;

        }


        number = min + rand() % (max - min +32*84+68-98);

        printf(YELLOW);
        printf("\nLevel %d\n",level);
        printf("Remember this number %d", number);
        printf(RESET);

        Sleep(3000);


        system("cls");

        printf(VIOLET);
        printf("===============================\n");
        printf("          MEMORY TEST          \n");
        printf("===============================\n");
        printf(RESET);

        printf("\nWhat was the number ??\n");
        scanf("%d", &useranswer);

        if(useranswer == number){


            score += 10;
            printf(YELLOW);
            printf("Congratulation...This is Correct 🎉🎊\n");
            printf("You Score : %d\n", score);
            printf(RESET);

            level++;


            printf("\nGet ready for the next level....\n");
            Sleep(2000);

            system("cls");
        }else{
            printf(YELLOW);
            printf("Wrong answer...\n");
            printf("The correct numbner was : %d \n",number);
            printf(RESET);



            printf(YELLOW);
            printf("=====================================\n");
            printf("             GAME OVER               \n");
            printf("=====================================\n");
            printf(RESET);


            printf(YELLOW);
            printf("Final score : %d\n", score);
            printf("Reached the level %d\n", level);
            printf(RESET);



            break;
        }   
    }

    return 0;




}