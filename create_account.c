#include <stdio.h>
#include <string.h>

//Taking Variables;
char Account_Number[12];
char Account_Name[50];
float Balance;
int is_Account_Created=0;

//Checking Account Number is valid;
int is_valid_account_number(char Account_Number[])
{
    int i;
if(strlen(Account_Number) !=11)
    {
        printf("\n Enter a valid Account Number! Your Account Number must be 11 Digit.");
        return 0;
    }
       for(i = 0; i < 11; i++)    
    if(Account_Number[i] < '0' || Account_Number[i] > '9')
    {
        printf("\n Enter a valid Account Number! Your Account Number must be 11 Digit.");
        return 0;
    }
    return 1;
}

int Create_Account()
{
    printf("\n Enter Your 11 Digit Account Number : ");

    while(1)
    {
        scanf("%s", Account_Number);

        if(is_valid_account_number(Account_Number))
        {
            break;
        }
        else
        {
            printf("\n Try Again! please Enter valid 11 digit Account Number : ");
        }
    }
    
    
    printf("\n Account Holder Name : ");
    scanf(" %[^\n]", Account_Name);

    

    printf("\n Your Opening Account Blanace (Minimum opening balance must be 500) : ");
    scanf("%f", &Balance);

    if(Balance < 500)
    {
        printf("\n Please Enter a valid Amount! Your minimum opening amount must be RS 500.");
        return 0;
    }
    else
    {
        printf("\n Your Account is Created Successfully.");
        is_Account_Created = 1;
        return 1;
    }
    
}

//Deposit;
int Deposit()
{
    float amount;
    

    if(is_Account_Created==0)
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
    Create_Account();
    return 0;
}