#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>


int main(){

    while(1){
        time_t currentTime;
        struct tm *localTime;

        time(&currentTime);
        localTime = localtime(&currentTime);

        printf("\nDigital Clock : %02d : %02d : %02d",localTime->tm_hour,localTime->tm_min,localTime->tm_sec);

        fflush(stdout);

        sleep(1);


    }

    return 0;
}