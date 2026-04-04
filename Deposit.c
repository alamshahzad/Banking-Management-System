#include <stdio.h>

// veriables;

float Balance;
int is_Account_Created=0;

//Deposit;
int Deposit()
{
    float amount;
    

    if(is_Account_Created==1)
    {
        printf(" Account Not Found! First Create Account.");
        return 0;
    }

    printf("\n Enter Deposit Amount : ");
    scanf("%f", &amount);

    if(amount < 100)
    {
    printf("\n Enter a valid amount! Your Minimum Deposit Amount must be RS 100. ");
    return 0;
    }
    else 
    {
        Balance += amount;
        printf("\n Deposit Successful.");
        printf("\n Your Current Balance : %f", Balance);
        return 1;
    }

}

int main()
{
    is_Account_Created == 1;
    Balance == 500;

    Deposit();

    return 0;

}