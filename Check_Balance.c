#include <stdio.h>

//variables;
float Balance;
int is_Account_Created=0;

int Check_Balance()

{
    if(is_Account_Created == 0)
    {
        printf("\n Account Not Found! First Create Account.");
        return 0;
    }

    printf("\n Current Balance : %f", Balance);
    return 1;
}

int main()
{
    is_Account_Created =1;
    Balance = 500;

    Check_Balance();
    return 0;


}
