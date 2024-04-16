/*
1.Write a function to print all Prime numbers between two given numbers. (TSRN)
2.Write a function to print first N terms of Fibonacci series (TSRN)
3.Write a function to print PASCAL Triangle. (TSRN)
4.Write a function to print all Armstrong numbers between two given numbers.(TSRN)
5.Write a function to find the sum of first N terms of the series 1!/1+2!/2+3!/3+4!/4+5!/5... n!/n (TSRS)
*/
#include <stdio.h>

int is_prime(int);
int power(int,int);
int digit_count(int);
int is_armstrong(int);
long long factorial(int);
void p1(int,int);  //done
void p2(int); //done
void p3(int); //pending working on logic
void p4(int,int); //done
long long p5(int); //done




void p1(int a,int b){
    int i;
    for(i=a;i<=b;i++){
        if(is_prime(i)==1) printf("%d\t",i);
    }
}
void p2(int n){
    int prev=-1,next=1,i,num=0;
    if (n>=1){
        if(n==1){
            printf("%d",prev);
        }
        else
        {
        printf("%d\t%d\t",prev,next); 
        }
    }
    
    for(i=2;i<n;i++){
        num=prev+next;
        printf("%d\t",num);
        prev=next;
        next=num;
    }

}

void p4(int a,int b){
    int i;
    for(i=a;i<=b;i++){
        if(is_armstrong(i)==1){
            printf("%d\t",i);
        }
    }
}

long long p5(int n){
    int i;long long sum=0;
    for (i=1;i<=n;i++){
        sum+=factorial(i)/i;
    }
    return sum;
}



int main(){
    //p1(1,100);
    //p4(1,200);
    // p2(7);
    printf("%lld",p5(3));
    return 0;
}

int is_armstrong(int n){
        int o_num=n,d_count=0,armstrong_num=0;
        d_count=digit_count(n);
        while (n!=0)
        {
           armstrong_num+=power(n%10,d_count);
           n/=10;
        }
        
        if (armstrong_num==o_num) return 1;
        return 0;
}

int digit_count(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}

int power(int a,int b){
    int i,pow=1;
    for(i=1;i<=b;i++){
        pow*=a;
    }
    return pow;
}

int is_prime(int n){
 int i;
 for (i=2;i<=n;i++){
    if (n%i==0) break;
    }
    if(n==i) return 1;
    return 0;
}

long long factorial(int n){
    long long fact=0;
        if(n==1) return 1;
        fact=n*factorial(n-1);
        return fact;
}