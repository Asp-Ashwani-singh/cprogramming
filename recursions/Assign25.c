/*
1. Write a recursive function to print first N natural numbers
2. Write a recursive function to print first N natural numbers in reverse order
3. Write a recursive function to print first N odd natural numbers
4. Write a recursive function to print first N odd natural numbers in reverse order
5. Write a recursive function to print first N even natural numbers
*/
#include <stdio.h>
void p1(int); //done
void p2(int); //done
void p3(int); //done
void p4(int); //done
void p5(int); //done

void p1(int n){
    if (n==1) { printf("%d\t",n); return;}
    p1(n-1);
    printf("%d\t",n);
}

void p2(int n){
        if (n==1) { printf("%d\t",n); return;}
        printf("%d\t",n);
        p2(n-1);
}

void p3(int n){
    if (n==1) { printf("%d\t",2*n-1); return;}
    p1(n-1);
    printf("%d\t",2*n-1);
}

void p4(int n){
    if (n==1)
    {
        printf("%d\t",2*n-1);
        return;
    }
    printf("%d\t",2*n-1);
    p4(n-1);
}

void p5(int n){
    if (n==1) { printf("%d\t",2*n); return;}
    p5(n-1);
    printf("%d\t",2*n);
}

int main(){
    p5(10);
    return 0;
}