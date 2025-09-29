#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    // Number guessing game
    
    srand(time(NULL));
    
    int guess = 0, tries = 0, min = 1, max = 100;
    int answer = (rand() % (max - min + 1)) + min;
    
    printf("***NUMBER GUESSING GAME***");
    
    do{
        printf("\nGuess a number between %d and %d: ",min, max);
        scanf("%d",&guess);
        tries++;
        
        if(guess < answer){
            printf("To Low!! Try again");
        }
        else if(guess > answer){
            printf("To high!! Try again");
        }
        else{
            printf("Excellent!!");
        }
    }while(guess!=answer);
    
    printf("The number to be guessed was %d",answer);
    printf("\nIt took you %d tries",tries);
    
}

