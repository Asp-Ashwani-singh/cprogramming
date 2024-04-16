/*
1.Write a recursive function to calculate sum of first N natural numbers
2.Write a recursive function to calculate sum of first N odd natural numbers 1 2 3 5
3.Write a recursive function to calculate sum of first N even natural numbers
4.Write a recursive function to calculate sum of squares of first n natural numbers 
5.Write a recursive function to calculate sum of digits of a given number
*/
#include <stdio.h>

int p1(int); //done
int p2(int); //done
int p3(int); //done
int p4(int); //done
int p5(int); //done

int p1(int n){
    int total=0;
    if (n==1){
        return 1;
    }
    total=n+p1(n-1);
    return total;
}

int p2(int n){
    int total=0;
    if (n==1){
        return 2*n-1;
    }
    total=2*n-1+p2(n-1);
    return total;
}

int p3(int n){
    int total=0;
    if (n==1){
        return 2*n;
    }
    total=2*n+p3(n-1);
    return total;
}

int p4(int n){
    int total=0;
    if (n==1){
        return n*n;
    }
    total=n*n+p4(n-1);
    return total;
}

int p5(int n){
    int total=0;
    if (n/10==0){
        return n;
    }
    total=n%10+p5(n/10);
    return total;
}



int main(){
    printf("%d",p5(2255));
    return 0;
}