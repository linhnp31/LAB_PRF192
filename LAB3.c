#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* LinhnPHE190314 */

int main() {
	int choice;
  //menu
	do{
		printf(" Welcome to LAB2_LinhNPHE190314| Choose a program :\n");
		printf("1. Program 1\n");
		printf("2. Program 2\n");
		printf("3. Program 3\n");
		printf("4. Program 4\n");
		printf("5. Program 5\n");
		printf("6. Program 6\n");
		printf("7. Program 7\n");
		printf("0. Exit\n");
		printf("---------------------------\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		// su dung switch case
		switch(choice){
		    case 1: 
				bai1();
				break;
		    case 2: 
				bai2();
				break;
		    case 3: 
		    	bai3();
				break;
		    case 4: 
		    	bai4();
				break;
			case 5: 
		    	bai5();
				break;
			case 6: 
		    	bai6();
				break;
			case 7: 
		    	bai7();
				break;
		    case 0: printf("See you again !");break;
		    default: printf("Invalid value\n");break;
		} 
	}while(choice!=0);
	return 0;
}

//Function check if n 
bool isPrime(int n){
    bool check = true;
    for(int i = 2; i < sqrt(n); i++){
        if(n%i==0){
            check=false;
        }
    }
    return check;
}
//function input a num and turn out true/false
int bai 1()
{
	printf("Check a number \n");
    printf("---------------------------\n");
    int a;
    do{
        printf("Enter a num: ");
        scanf("%d",&a);
        if(a < 2){
            printf("n isn't a prime\n");
        }
        else if(isPrime(a)){
            printf("n is a prime\n");
        }else{
            printf("n isn't a prime\n");
        }
    }while(a <2);
    return 0;

//function check date
bool isValidDate(int d, int m, int y){
    bool check = true;
    //check date
    if(d<1){
        check = false;
    }
    //maxdate is 31
    else if(d>31||m<1||m>12){
        check = false;
    //check if month isn't 1,3,5,7,8,10,12
    }else if(m==4||m==6||m==9||m==11){
        if(d>30){
            check = false;
        }
    //when m = 2 need to check leap year
    }else if(m==2){
        if(y%400==0||(y%4==0 && y%100!=0)){
            if (d>29){
                check = false;
            }
        }else{
            if(d>28){
                check = false;
            }
        }
    }
    
    return check;
}
//function chinh cua bai 2, chay cau lenh I/O 
int bai2()
{
    int d,m,y;
    int try;
    do{
        printf("Enter day: ");
        scanf("%d",&d);
        printf("Enter month: ");
        scanf("%d",&m);
        printf("Enter year: ");
        scanf("%d",&y);
        if(isValidDate(d,m,y)){
            printf("%d is a valid date",d);
        }else{
            printf("%d is an invalid date",d);
        }
        printf("\nEnter 0 to try again: ");
        scanf("%d",&try);
    }while(try == 0);
    return 0;
}
