//Banking App 

#include <stdio.h>


void checkBalance(float);
float deposit();
float withdraw(float);

int main()
{
    int choice = 0;
    float balance = 0.0;
    
    printf("*** Welcome to the Bank ATM ***");
    
    do{
        printf("\n1.Check Balance.\n2.Deposit Money.\n3.Withdraw Money.\n4.Exit.\nSelect an option: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
            checkBalance(balance);
            break;
            case 2:
            balance += deposit();
            break;
            case 3:
            balance -= withdraw(balance);
            break;
            case 4:
            printf("Thank you for using our servies: ");
            break;
            default:
            printf("Invalid choice of operations!!");
            break;
        }
    }while(choice!=4);

    return 0;
}

//Function to check balance 
void checkBalance(float balance){
    printf("\nYour current balance is ₹%.2f\n",balance);
}

//Function to deposit
float deposit(){
    float amount = 0.0;
    printf("Enter the amount you want to deposit: ");
    scanf("%f",&amount);
    
    if(amount<0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else{
        printf("Successfully deposited ₹%.2f",amount);
        return amount;
    }
    return 0.0;
}

// Function to withdraw
float withdraw(float balance){
    
    float amount = 0.0f;
    printf("Enter the amount you want to withdraw: ");
    scanf("%f",&amount);
    
    if(amount<0){
        printf("Invalid amount");
        return 0.0f;
    }
    else if(amount>balance){
        printf("Insufficient Fund! Your balance is ₹%.2f\n",balance);
        return 0.0f;
    }
    
    else{
        printf("Successfully withdrew ₹%.2f\n",amount);
        return amount;
    }
    return 0.0;
}