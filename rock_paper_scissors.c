//Rock Paper Scissors Game

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int computerChoice, int userChoice);

int main()
{
    srand(time(NULL));
    
    printf("*** Rock Paper Scissors ***\n");
    
    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();
    checkWinner(userChoice, computerChoice);

    return 0;
}
//Function to get computer choice
int getComputerChoice(){
    return  (rand()%3)+1;
}

// Function to get user choice
int getUserChoice(){
    int choice = 0;
    do{
       printf("Choose an option.\n1.Rock.\nPaper.\3.Scissors.\nEnter your choice: ");
       scanf("%d",&choice);
    }while(choice<1 || choice>3);
    
    return choice;
    
}

//Function to check the winner
void checkWinner(int computerChoice, int userChoice){
    //To display user choices
    switch(userChoice){
        case 1:
        printf("You chose ROCK\n");
        break;
        
        case 2:
        printf("You chose PAPERS\n");
        break;
        
        case 3:
        printf("You chose SCISSORS\n");
        break;
    }
    
    
    //To display computer choices
    switch(computerChoice){
        case 1:
        printf("Computer chose ROCK\n");
        break;
        
        case 2:
        printf("Computer chose PAPERS\n");
        break;
        
        case 3:
        printf("Computer chose SCISSORS\n");
        break;
    }
    
    
    if(userChoice == computerChoice){
        printf("It's a TIE");
    }
    
    else if ((userChoice == 1 && computerChoice == 3)||
             (userChoice == 2 && computerChoice == 1)||
             (userChoice == 3 && computerChoice == 2)){
        printf("Congratulations You won!");
    }
    else{
        printf("Sorry, You lost!");
    }
}