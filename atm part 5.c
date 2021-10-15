#include<stdio.h>
#include<string.h>

int login(int username, int password);
double withdraw(double balance, double withdraw_amount);
double tranfer(double balance, double tranfer_amount, int tranfer_account);
int trans(int choice1);
void check_balance(double balance);
void logout();

main()
{
	int username, password, tranfer_account, choice1;
	double balance = 10000000000.000;
	double withdraw_amount, tranfer_amount;
	char choice2;
	
	printf("\nWelcome to HSBC ATM!");
	int i = login(username, password);
	if(i == 1){
		printf("\nLogged in successfully");
		do{
			choice1 = trans(choice1);
			switch(choice1){
				case 1:
					withdraw(balance, withdraw_amount);
					break;
				case 2:
				    tranfer(balance, tranfer_amount, tranfer_account);
					break;	
				case 3:
				    check_balance(balance);
				    break;
				default:
				    printf("\nThe transaction you selected is not valid!!");	
			}
			printf("\nDo you want to continue an other transaction?");
		    printf("\nEnter 'Y' if you agree, enter 'N' if you dont: ");
		    fflush(stdin);
		    scanf("%c", &choice2);
		}while(choice2 == 'Y' || choice2 == 'y');
		if(choice2 != 'Y' && choice2 != 'y')
		    logout();
	}
	
	return 0;
}

int login(int username, int password){
	
	printf("\nEnter your username: ");
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
	return 1;
}
int trans(int choice1){
	printf("\nPlease choose a transaction.");
	printf("\n 1.Withdrow money.\n 2.Tranfer money.\n 3.Checking account balance.\n 4.End transaction.");
	printf("\nChoose your transaction: ");
	scanf("%d", &choice1);
	return choice1;
}
double withdraw(double balance, double withdraw_amount){
	printf("\nYour choice is withdraw money.");
	printf("\nPlease enter the amount you want to withdraw. ");
	scanf("%lf", &withdraw_amount);
	if(withdraw_amount <= balance)
	{
	    balance = balance - withdraw_amount;
	    printf("\nWithdraw money successfully.");
		printf("\nYour account balance is %lf", balance);
	}
	else 
		printf("\nYour account balance is not enough.");
	return balance;	
}
double tranfer(double balance, double tranfer_amount, int tranfer_account){
	printf("\nYour choice is transfer money.");
	printf("\nPlease enter the account you want to tranfer:");
	scanf("%d", &tranfer_account);
	            
	while(tranfer_account != 5678)
	{
	    printf("\nThe account you want to tranfer is not correct! Please try again.");
	    printf("\nPlease enter the account you want to tranfer:");
	    scanf("%d", &tranfer_account);
	}    
	            
	if(tranfer_account == 5678)
	{
	    printf("\nPlease enter the amount you want to tranfer:");
	    scanf("%lf", &tranfer_amount);
	    if(tranfer_amount <= balance)
	    {
	        balance = balance - tranfer_amount;
	        printf("\nTranfer successfully.\nYour account balance is %lf", balance);
	    }
		else
		printf("\nYour balance is not enough.");
	}
	return balance;			
}
void check_balance(double balance){
	printf("\nYour choice is checking account balance.");
	printf("\nYour account balance is %lf", balance);
}
void logout(){
	printf("\nLogged out!! See you again <3");
}
