#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

/* LinhnPHE190314 */


//In day Fibonacci tu 1 so input
int Fibbo(n){
    if(n == 0){ 
        return 0; 
    } 
    else if(n == 1){ 
        return 1; 
    } 
    else{ 
        return Fibbo(n-2) + Fibbo(n-1); 
    } 
}
bai1()
{
    int n;
    int try;
    do{
        printf("Enter a num: ");
        scanf("%d",&n);
        for(int i = 0; i < n; i++){
        	printf("%d ",Fibbo(i));
        }
        printf("\nEnter 0 to try again: ");
        scanf("%d",&try);
    }while(try == 0);
}
//Check date is valid or not
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
bai2(){
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
}

//main function
int main() {
	int choice;
  //menu
	do{
		printf(" Welcome to LAB2_LinhNPHE190314| Choose a program :\n");
		printf("1. Program 1\n");
		printf("2. Program 2\n");
		printf("3. Exit\n");
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
				printf("See you again !");
				break;;
		    default: printf("Invalid value\n");break;
		} 
	}while(choice!=3);
	return 0;
}
