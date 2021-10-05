// ATM part 4
#include<stdio.h>
main()
{
	int username, password, choice, tranfer1;
	double balance = 100000000.00;
	double withdrawamount, tranferamount;
	
	printf("Enter your username: ");
	scanf("%d", &username);
	printf("\nEnter your password: ");
	scanf("%d", &password);
	
	while(username != 1234)
	{
		printf("\nUsername incorrect!");
		printf("\nEnter your username: ");
  	        scanf("%d", &username);
  	        printf("\nEnter your password: ");
  	        scanf("%d", &password);   
  	}
  	
  	while(password != 1999)
  	{
  		printf("\nPassword incorrect!");
  		printf("\nEnter your username: ");
  		scanf("%d", &username);
                printf("\nEnter your password: ");
	        scanf("%d", &password);
	}
	
	if(username == 1234 && password == 1999)
	 {
  
			printf("\nLogged in successfully. Please choose a transaction.");
			printf("\n 1.Withdrow money.\n 2.Tranfer money.\n 3.Checking account balance.\n 4.End transaction.");
			printf("\nChoose your transaction: ");
	                scanf("%d", &choice);
	         
		        while(choice != 1 && choice !=2 && choice !=3 && choice !=4)
		        {
		    	    printf("\nInvalid choice!");
		    	    printf("\nChoose your transaction: ");
	                    scanf("%d", &choice);	
		   	}
	 	   	
			switch(choice)
	                {
	                 case 1:
	                    printf("\nYour choice is withdraw money.");
	                    printf("\nPlease enter the amount you want to withdraw. ");
	                    scanf("%lf", &withdrawamount);
	                    if(withdrawamount <= balance)
	                    {
	             	      balance = balance - withdrawamount;
	             	      printf("\nWithdraw money successfully.");
			      printf("\nYour account balance is %lf", balance);
	                     }
	                    else 
			      printf("\nYour account balance is not enough."); 	
		         break;
	                 case 2:
	                   printf("\nYour choice is transfer money.");
	                   printf("\nPlease enter the account you want to tranfer:");
	                   scanf("%d", &tranfer1);
	            
	                   while(tranfer1 != 5678)
	                   {
	            	     printf("The account you want to tranfer is not correct! Please try again.");
	            	     printf("\nPlease enter the account you want to tranfer:");
	                     scanf("%d", &tranfer1);
	                   }    
	            
			  if(tranfer1 == 5678)
	                  {
	            	     printf("\nPlease enter the amount you want to tranfer:");
	            	     scanf("%lf", &tranferamount);
	            	     if(tranferamount <= balance)
	            	      {
	            		balance = balance - tranferamount;
	            		printf("\nTranfer successfully.\nYour account balance is %lf", balance);
	            	      }
		          else
		             printf("\nYour balance is not enough.");
			  }			
	                break;
	                case 3:
	                   printf("\nYour choice is checking account balance.");
	                   printf("\nYour account balance is %lf", balance);
		        break;
	                case 4:
	                   printf("\nYour choice is end transaction.");
	                   printf("\nSee you again.");
		        break;
		        }
	 }
	return 0;
}		 	 	      
