// ATM part3
#include<stdio.h>
main()
{
	int username, password, choice, tranfer1;
	double balance = 100000000;
	double withdrawamount, tranferamount;
	
	printf("Enter your username: ");
	scanf("%d", &username);
	printf("\nEnter your password: ");
	scanf("%d", &password);
	
	if(username == 1234)
	 {
	 	if(password == 1999)
	 	 {  
			printf("\nLogged in successfully. Please choose a transaction.");
			printf("\n 1.Withdrow money.\n 2.Tranfer money.\n 3.Checking account balance.\n 4.End transaction.");
			printf("\nChoose your transaction: ");
	                scanf("%d", &choice);
	 	   	switch(choice)
	                 {
	                   case 1:
	                     printf("\nYour choice is withdraw money.");
	                     printf("\nPlease enter the amount you want to withdraw. ");
	                     scanf("%f", &withdrawamount);
	            
	                     if(withdrawamount <= balance)
	                      {
	             	            balance = balance - withdrawamount;
	             	            printf("\nWithdraw money successfully.\nYour account balance is %f", balance);
	                      }
	                     else 
				    printf("\nYour account balance is not enough.");
		             break;
	                   case 2:
	                     printf("\nYour choice is transfer money.");
	                     printf("\nPlease enter the account you want to tranfer:");
	                     scanf("%d", &tranfer1);
	                     if(tranfer1 == 5678)
	                      {
	            	            printf("\nPlease enter the amount you want to tranfer:");
	            	            scanf("%f", &tranferamount);
	            	         if(tranferamount <= balance)
	            	         {
	            		    balance = balance - tranferamount;
	            		    printf("\nTranfer successfully.\nYour account balance is %f", balance);
	            	          }
					else
					    printf("\nYour balance is not enough.");
				}
			     else
				    printf("\nThe account you want to tranfer incorrect.Please try again.");			
	                     break;
	                     case 3:
	                       printf("\nYour choice is checking account balance.");
	                       printf("\nYour account balance is %f", &balance);
		               break;
	                     case 4:
	                       printf("\nYour choice is end transaction.");
	                       printf("\nSee you again.");
		               break;
	                     default:
	                       printf("\nInvalid choice!! re-selected please.");
		      }
		     }
	 	      else
		         printf("\nPassword incorrect! Please try again.");
		   }
	else
	    printf("Username incorrect! Please try again.");
	return 0;
}		 	 	      
