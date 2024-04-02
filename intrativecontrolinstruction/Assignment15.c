#include <stdio.h>
/*
1.Write a program to print all Prime numbers under 100
2.Write a program to print all Prime numbers between two given numbers
3.Write a program to find next Prime number of a given number
4.Write a program to calculate HCF of two numbers
5.Write a program to check whether two given numbers are co-prime numbers or not
*/

int is_prime(int num){
    int i=2;
    if(num==2 || num==3 || num==5) return 1;
    for(i=2;i*i<=num;i++){
        if (num%i==0)return 0;
    }
    return 1;
}
void program1(){
    int i=2;
    for(i=2;i<=100;i++){
    if(is_prime(i)==1){
        printf("%d\t",i);
    }
    }
}

void program2(){
    
}


int main(){
program1();
    return 0;
}