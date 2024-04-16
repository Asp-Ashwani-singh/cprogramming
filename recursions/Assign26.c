/*
1.Write a recursive function to print first N even natural numbers in reverse order
2.Write a recursive function to print squares of first N natural numbers
3.Write a recursive function to print binary of a given decimal number
4.Write a recursive function to print octal of a given decimal number
5.Write a recursive function to print reverse of a given number
*/

#include <stdio.h>

void p1(int); //done
void p2(int); //done
void p3(int); //done
void p4(int); //done
void p5(int); //done


void p1(int n){
    if(n==1){
        printf("%d\t",2*n);
        return;
    }
    printf("%d\t",2*n);
    p1(n-1);
}

void p2(int n){
        if(n==1){
            printf("%d\t",n*n);
            return;
        }
    p2(n-1);
    printf("%d\t",n*n);
}

void p3(int n){
    if (n/2==0)
    {
        printf("%d",n);
        return;
    }
    p3(n/2);
    printf("%d",n%2);
}
void p4(int n){
    if(n/8==0){
        printf("%d",n);
        return;
    }
    p4(n/8);
    printf("%d",n%8);
}

void p5(int n){
    if (n/10==0){
        printf("%d",n);
        return;
    }
    printf("%d",n%10);
    p5(n/10);
}


int main(){
    p5(1234);
    return 0;
}