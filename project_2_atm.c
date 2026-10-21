#include<stdio.h>

int main()
{
    int Epin=1234,pin;
    int choice;
    float amount,balance=5000;
    printf("enter the pin \n");
    scanf("%d",&pin);
    if (Epin!=pin)
    {
        printf("Invalid PIN\n");
        return 0;
    }
   
     printf("login successfull\n");
     do
     {
        
        printf("\n 1. Check balance\n");
        printf("\n 2. Withdraw\n");
        printf("\n 3. Deposit \n");
        printf("\n 4.Exit \n");
        printf("enter the choice\n");
        scanf("%d",&choice);
        
    
     
    
     
     switch(choice)
     {
        case 1:

       {
        printf("Total balance=%f\n",balance);
        break;
        }
       case 2:
       {
        printf("enter the withdraw amount\n");
        scanf("%f",&amount);
        if(amount<=0)
        {
        printf("invalid amount\n");
        }
     
       else if(amount>balance)
       {
        printf("in sufficient amount\n");
        }

       else 
       {
        balance-=amount;
        printf("withdraw success\n");
        printf("new balance=%f\n",balance);
       }
       break;
       }
       case 3:
       {
       printf("Enter the deposit amount\n");
       scanf("%f",&amount);
       if(amount>0)
       {
         balance+=amount;
         printf("\ndeposit successful");
         printf("\nTotal amount= %f",balance);
       }
       else
       {
         printf("\n Invalid amount");


       }
       break;
       }
       case 4:
       {
         printf("Thank you");
         break;
       }
       default:
       {
         printf("\nIvalid Choice");
       }
      }
    }
    while(choice!=4);
    
    return 0;
      

}