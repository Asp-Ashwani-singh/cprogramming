/*
1.Write a function to calculate the factorial of a number.(TSRS)
2.Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
3.Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
4.Write a function to check whether a given number contains a given digit or not.(TSRS)
5.Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/

//Decalaration of function
#include <stdio.h>
int factorial(int);
int is_digit(char);
float permutation(int,int);
float combination(int,int);
void prime_factor(int);
int is_prime(int);




int main()
{
    /*
        long num;
        printf("Enter the number to calculate factorial ");
        scanf("%lld",&num);
        printf(" %lld",fuctorial(num));
   

        // four program

        char ch;
        printf("Enter the value to check whether digit or not ");
        scanf("%c",&ch);
        if (isdigit(ch))
        {
            printf("%c is digit",ch);
        }
        else{printf("%c is not a digit",ch);}

        //fifth program

         */
       prime_factor(36);
    return 0;
}


void prime_factor(int n){
    int i;
    for (i=2;n;i++){
        while(n!=0){
            if(n%i==0 && is_prime(i)==1)
            {
                printf("%d",i);
                n/=i;
            }
            else break;
        }
    }
}

int is_prime(int n){
    int i;
    for (i=2;i<=n;i++){
        if(n%i==0) break;
    }
    if(i==n) return 1;
    return 0;
}

int check_digit(int n,int d){
    while (n!=0)
    {
        if(n%10==d){
            return 1;
        }
        n/=10;
    }
    return 0;
}

int is_digit(char c){
    return (c>='0' && c<='9');
}

int factorial(int num){
    if (num<=0) {
        printf("Invalid number");
        return 0;
    }
    int fact=1;
    while(num!=0){
        fact*=num;
        num--;
    }
    return fact;
}

float combination(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

float permutation(int n,int r){
    return factorial(n)/(factorial(n-r));
}