/*
1.Write a recursive function to calculate factorial of a given number
2.Write a recursive function to calculate HCF of two numbers
3.Write a recursive function to print first N terms of Fibonacci series
4.Write a program in C to count the digits of a given number using recursion.
5.Write a program in C to calculate the power of any number using recursion.
*/
#include <stdio.h>

int p1(int);
int p2(int,int,int);
int p4(int);
int p5(int,int);

int p1(int n){
    int total=1;
    if (n==1) {return 1;}
    total=n*p1(n-1);
    return total;
}

int p2(int a,int b,int c){
    int min;
    if (c==0){
        min=a<b?a:b;
    }
    else{
        min=c;  
    }
    if (a%min==0 && b%min==0){
        return min;
    }
    return p2(a,b,--min);
}

// int p3(int prev,int next,int n){
//         if(n==1){
//             printf("%d",prev);
//         }
//         if (n>2)
// }
int p5(int n,int p)
{
    int count=1;
    if(p==1){
        return n;
    }
    return n*p5(n,--p);
}

int p4(int n)
{
    int count=0;
    count++;
    if(n/10==0){
        return 1;
    }
    return count+p4(n/10);
}



int main(){
    // printf("%d",p2(10,25,0));
    // printf("%d",p3(-1,1,10));
    // printf("%d",p4(55515));
    printf("%d",p5(10,3));
    return 0;
}
