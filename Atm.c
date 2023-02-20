#include <stdio.h>
int current_balance;
int main_balance = 1000000;
	int pin;
	int pin2;
	int decision;
	int decision_2;
	int balance;
	int amount;
	int y = 0; 
	int x = 0;
	struct users{
		int pin;
		char name[50];
		int balance;
	};
	struct users shaba = {2001,"shaba",50000};
	struct users walid = {2002,"walid",10000};
	struct users spider = {2003,"spider",4000};
	struct users rahma = {2004,"rahma",120000};
	struct users danny = {2005,"danny",500000};
	struct users salim = {2006,"salim",40000};

main(){
	
// variable initialization
	
	
	
	printf("\n\t\tCurrent Money in ATM is :N%d\n\n\n\n", main_balance);
	
	//begin label
	begin:   
	printf("enter your pin\n");
	scanf("%d",&pin);

if(pin == shaba.pin){
		printf("Welcome %s\n", shaba.name);
		current_balance = shaba.balance;	
} else if(pin == walid.pin){
		printf("Welcome %s\n", walid.name);
		current_balance = walid.balance;
} else if(pin == spider.pin){
		printf("Welcome %s\n", spider.name);
		current_balance = spider.balance;
} else if(pin == rahma.pin){
		printf("Welcome %s\n", rahma.name);
		current_balance = rahma.balance;
} else if(pin == danny.pin){
		printf("Welcome %s\n", danny.name);
		current_balance = danny.balance;
} else if(pin == salim.pin){
		printf("Welcome %s\n", salim.name);
		current_balance = salim.balance;
} else {
	x++;
	if(x<3){
	printf("\t wrong pin\n");
	goto begin;
	} else {
	printf("\tpin is incorrect\n");
	goto end;
	}
}

//task label
task:	
		printf("\t\t what do you want to do:\n \t Enter 1 for Withdraw\n \t Enter 2 for Deposit \n \t Enter 3 for balance\n");
		scanf("%d", &decision);
		if(decision == 1){
			withdraw();
		} else if(decision == 2){
			deposit();
		} else if(decision == 3){
			printf("\t your balance is N%d\n", current_balance);
		}else {
			printf("\t invalid request.\n");
			goto task;
		}
	//Continue or not
		printf("\t\t Do you want to continue?\n");
		printf("\t Enter 1 to Continue\n");
		printf("\t Enter 2 to End\n");
		scanf("%d", &decision_2);
		
		//continue
		if(decision_2 == 1){
			required:
			printf("\t Enter your pin\n");
			scanf("%d",&pin2);
			if(pin2 == pin){
				y = 0;
			goto task;
			} else {
				y++;
				if(y<3){
					printf("\t pin is incorrect \n");
					goto required;
				} else {
					printf("\t pin is incorrect\n");
					goto end;
					
				}
		}
		//end program
		} else if(decision_2 = 2){
		goto end;
		}
end:
	printf("\tPlease take your card\n");

}
//withdrawl function
withdraw(){
		with:
		printf("\t enter an amount you want to withdraw\n");
			scanf("%d",&amount);
			if(amount <= current_balance || amount > 0){
			current_balance = withdraw_f(current_balance,amount);
			main_balance = withdraw_f(main_balance,amount);
			printf("\t Withdrawl was successful\n");
			printf("\t Your current balance is N%d\n", current_balance);
			printf("\n\t\t Current Money in ATM is :N%d\n\n\n\n", main_balance);
			} else {
				printf("\t insufficient funds\n");
				goto with;
			}		
}
int withdraw_f(int x, int y){
	int j = x - y;
	return(j);
}

//Deposit function
deposit(){
		deposit:
		printf("\t enter an amount you want to Deposit\n");
		scanf("%d",&amount);
		if(amount > 0){
		current_balance = deposit_f(current_balance,amount);
		printf("\t Deposition was successful\n");
		printf("\t Your current balance is N%d\n", current_balance);
		} else {
			printf("\t invalid entry\n");
			goto deposit;
	    }	
}
int deposit_f(int x, int y){
	int j = x + y;
	return(j);
}
