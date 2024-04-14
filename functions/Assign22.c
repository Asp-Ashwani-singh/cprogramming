/*
1.Write a function to calculate the factorial of a number.(TSRS)
2.Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
3.Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
4.Write a function to check whether a given number contains a given digit or not.(TSRS)
5.Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/

//Decalaration of function
#include <stdio.h>
long long fuctorial(long long);
int isdigit(char);


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
    return 0;
}

// int check_single_digit(char a[]){

    
// }

int isdigit(char c){
    return (c>='0' && c<='9');
}

long long fuctorial(long long num){
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

