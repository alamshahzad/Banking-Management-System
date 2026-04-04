#include <stdio.h>

//variables;
float Balance;
int is_Account_Created=0;


int Withdraw()
{
    float amount;

    if(is_Account_Created == 0)
    {
        printf("\n Account Not Found! First Create Account.");
        return 0;
    }

    printf("\n Enter Withdrawal Amount : ");
    scanf("%f", &amount);

    if(amount <= 0)
    {
        printf("\n Invalid Amount!");
        return 0;
    }

    if(amount > Balance )
    {
    printf("\n Insufficient Balance!");
    return 0;
    }
    else
    {
        Balance -= amount;
        printf("\n Withdraw Successful.");
        printf("\n Current Balance : %f", Balance);
        return 1;

    }

}

int main()
{
    is_Account_Created = 1;
    Balance = 500;
    Withdraw();

    return 0;
}