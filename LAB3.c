#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
		printf("8. Program 8\n");
		printf("9. Program 9\n");
		printf("10. Program 10\n");
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
			case 8: 
		    	bai8();
				break;
			case 9: 
		    	bai9();
				break;
			case 10: 
		    	bai10();
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
            check = false;
        }
    }
    return check;
}
//function input a num and turn out true/false
bai1(){
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
}
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


//Dung de quy de tim giai thua cua so n
int factorial(n){
    //neu n = 1 truc tiep tra ve 1
    if(n==1){
        return 1;
    //neu n > 1 goi lai function factorial
    }else{
        return n*factorial(n-1);
    }
}

int getRelPos( double x, double y, double r) 
{
   double d2=x*x + y*y;  /* d2= x2+ y2  */
   double r2= r*r;            /* r2*/  
   if ( d2 < r2 ) return 1 ; /* d2<r2 : the point is in the circle */
   else if ( d2 == r2 ) return 0 ; /* d2=r2 : the point is on the circle */
   return -1 ; /* d2 > r2 : the point is out of the circle */
}

bai3()
{
    double x, y, r;
    printf("Input co-ordinate(x,y):");
    scanf("%lf%lf", &x, &y);
    do {
        printf("Radius = ");
        scanf("%lf", &r);
        if (r <= 0) printf("Input a positive Radius!!!\n");
    } while (r <= 0);
    ( getRelPos( x, y, r) == 1 )? printf("the point is in the circle"):
    	( !( getRelPos( x, y, r) )? printf("the point is on the circle"): printf("the point is out of the circle") );
}


bai4()
{
    int n;
    int try;
    do{
        printf("Enter a num: ");
        scanf("%d",&n);
        printf("factorial of %d is %d ",n,factorial(n));
        printf("\nEnter 0 to try again: ");
        scanf("%d",&try);
    }while(try == 0);
}
//Dung de quy de tim giai thua cua so n
int Fibbo(n){
    //2 so dau day la 1 1
    int t1=1,t2=1,f=1;
    for(int i = 3; i <= n; i++){
        //so tiep theo la tong 2 so truoc
        f=t1+t2;
        t1=t2;
        t2=f;
    }
    return f;
}
bai5()
{
    int n;
    int try;
    do{
        printf("Enter a num: ");
        scanf("%d",&n);
        printf("The %d value of the Fibbonacci sequence is %d",n,Fibbo(n));
        printf("\nEnter 0 to try again: ");
        scanf("%d",&try);
    }while(try == 0);
}

int isFibonacci(int n)
{
    int t1 = 1, t2 = 1, f = 1;
    if (n == 1) return 1;   /* n belongs to the Fibonacci sequence*/
    while (f < n)           /* Find out the Fibo number f to n */
        {
            f  = t1 + t2;
            t1 = t2;
            t2 = f;
        }
    return n == f;  /* if n==f : n is Fibo element -> return 1 */
}

bai6()
{
    int n;
    do {
          printf("Input a positive integer:");
          scanf("%d", &n);
          if (n < 1) printf("Positive Integer!!!\n");
     } while (n < 1);
     printf( ( isFibonacci(n))? "It is a Fibonacci element." :"It is not a Fibonacci element.");
}

int sumDigits (int n)
{   
    int sum=0; /* initialize sum of digits */
    do {  
            int remainder = n % 10 ; /* Get a digit at unit position */
            n = n / 10;
            sum += remainder;
    } while (n>0);
    return sum;
}

bai7()
{
    int n;
    do {
        printf("N = ");
        scanf("%d", &n);
        printf("Sum digits = %d\n", sumDigits(n) );
    } while (n >= 0);
}

double makeDouble(int  ipart, int fraction)
{  
    double d_f = fraction;
    while (d_f >= 1) d_f /= 10; /* create the fraction <1 */
    if (ipart < 0) return ipart - d_f; /* case  -51 - 0.139 */
    return ipart + d_f ;  /* case 32 + 0.25 */
}

bai8()
{
    int ipart, fraction;
    printf("Integer part : ");
    scanf("%d", &ipart);
    do {
        printf("Fraction part : ");
        fflush(stdin);
        scanf("%d", &fraction);
        if (fraction < 0) printf("Fraction must be Positive!!!\n");
    }while (fraction < 0);
    printf("Value = %lf", makeDouble(ipart, fraction));
}
void printMinMaxDigits( int n)
{
    int digit; /* Variable for extracting 1 digit */
    int min, max ; /* Result variables */
    digit = n % 10;  /* get the first rightmost digit: 3 */
    n = n / 10; /* 1029, the remainder needs to proceed after*/
    min = max = digit; /* initialize results */
    while (n > 0)
    {
        digit = n % 10; /* Get the next digit */
        n = n / 10;
        if (min > digit) min = digit; /* update results */
        if (max < digit) max = digit;
   }
   printf("Max digit : %d\n", max);
   printf("Min digit : %d\n", min);
}
int gcd( int a, int b)
{  
    while ( a != b )
       if ( a > b ) a -= b;
       else b -= a;
   return a;
}

int lcm( int a, int b)
{ 
    return (a * b) / gcd(a,b);
}

bai9()
{
    int a, b;
    do {
    	printf("Enter number:");
        fflush(stdin);
        scanf("%d%d", &a, &b);
        if (a <= 0 || b <= 0) printf("Input two positive integers!!!\n");
    } while (a <= 0 || b <= 0);
    printf("GCD(%d,%d)=%d\n", a, b, gcd(a,b));
    printf("LCM(%d,%d)=%d\n", a, b, lcm(a,b));
}
bai10()
{
    int n;
    do {
    	printf("Enter number:");
        scanf("%d", &n);
        printMinMaxDigits(n);
    } while( n < 0);
}
