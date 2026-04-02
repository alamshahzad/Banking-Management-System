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

//Create Account;
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

//Withdraw;
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

    

//Check Balance;
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

//Display Account Details;
int Display_Account_Details()
{
    if(is_Account_Created == 0)
    {
        printf("\n Account Not Found! First Create Account.");
        return 0;
    }

    printf("\n ======ACCOUNT DETAILS======");
    printf("\n Account Number      : %s", Account_Number);
    printf("\n Account Holder Name : %s", Account_Name);
    printf("\n Total Balance       : %f", Balance);

    return 1;

}

//Validate Task Number;
int Verify_Task_Number()
{
    int choice;
    
    printf("\n Enter Your Choice (1-6)       : ");
    scanf("%d", &choice);

    if(choice < 1 || choice > 6)
    {
    printf("\n Invalid CHoice!");
    return 0;
    }
    return choice ;

}

//Main Function;
int main()
{
    int choice;
    while(1)
    {
        printf("\n -----WELCOME TO THE BANKING SYSTEM-----");
        printf("\n 1. Press 1 to Create Account  : ");
        printf("\n 2. Press 2 to Deposit Amount  : ");
        printf("\n 3. Press 3 to Withdraw Amount : ");
        printf("\n 4. Press 4 to Check Balance   : ");
        printf("\n 5. Press 5 to Account Details : ");
        printf("\n 6. Press 6 to Exit            : ");

        choice = Verify_Task_Number();

    

     if(choice == 1)
     {
        Create_Account();
     }
     else if(choice == 2)
     {
        Deposit();
     }
     else if(choice == 3)
     {
        Withdraw();
     }
     else if(choice == 4)
     {
        Check_Balance();
     }
     else if(choice == 5)
     {
        Display_Account_Details();
     }
     else if(choice == 6)
     {
        printf("\n Thank you for using our Banking System!");
        break;
     }
     else
     {
        printf("\n Invalid Choice! Please Choice a Correct option.");
     }
    }

    return 0;


}




