// ATM part 2
#include<stdio.h>
main()
{
	int username, password, choice;
	printf("Enter your username: ");
	scanf("%d", &username);
	printf("\nEnter your password: ");
	scanf("%d", &password);
	if(username == 1234)
	 {
	 	if(password == 1999)
	 	 {  
			printf("\nLogged in successfully. Please choose a transaction.");
			printf("\nChoose your transaction: ");
	        scanf("%d", &choice);
	 	   	switch(choice)
	       {
	         case 1:
	            printf("\nYour choice is withdraw money.");
		        break;
	         case 2:
	            printf("\nYour choice is transfer money.");
	            break;
	         case 3:
	            printf("\nYour choice is checking account balance.");
		        break;
	         case 4:
	            printf("\nYour choice is end transaction.");
		        break;
	            default:
	            printf("\nInvalid choice!! re-selected please.");
		    }
		  }
	 	else
		   printf("\nPassword incorect! Please try again.");
		   }
	else
	    printf("Username incorect! Please try again.");
	return 0;
}		 	 	      
