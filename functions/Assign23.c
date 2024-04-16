/*
1. Write a function to calculate LCM of two numbers. (TSRS) 
2. Write a function to calculate HCF of two numbers. (TSRS)
3. Write a function to check whether a given number is Prime or not. (TSRS) 
4. Write a function to find the next prime number of a given number. (TSRS) 
5. Write a function to print first N prime numbers (TSRN)
*/
#include <stdio.h>

int p1(int,int);
int p2(int,int);
int p3(int);
int p4(int);

int p1(int a,int b){
    int max;
    for(max=a>b?a:b;max<=a*b;max++){
        if(max%a==0 && max%b==0)
            break;
    }
    return max;
}

int p2(int a,int b){
    int min;
    for (min=a<b?a:b;min>=1;min--){
         if(a%min==0 && b%min==0)
            break;
    }
    return min;
}

int p3(int n){
    int i;
    for (i=2;i<=n;i++){
        if(n%i==0) break;
    }
    if (n==i) return 1;
    return 0;
}

int p4(int n){
    int i;
    for (i=++n;;i++){
        if (p3(i)==1){
            break;
        }
        continue;
    }
    return i;
}

void p5(int n){
    int i,num;
    for (i=1;i<=n;i++){
        num=p3(i);
        if (num==1) printf("%d\t",i);
    }
}


int main(){
    //call here program to check
    return 0;
}