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
    int start,end;
    printf("Enter two number for finding prime number");
    scanf("%d%d",&start,&end);
    for (start;start<=end;start++){
          if(is_prime(start)==1){
        printf("%d\t",start);
    }
    }
}

void program3(){
    int start;
    printf("Enter number for finding next prime number");
    scanf("%d",&start);
    for (++start;;start++){
          if(is_prime(start)==1){
        printf("%d\t",start);
        break;
    }
}
}

void program4(){
    int num1,num2,min;
    printf("Enter two number");
    scanf("%d%d",&num1,&num2);
    for (min=num1<num2?num1:num2;min>=1;min--){
    if (num1%min==0 && num2%min==0)
        break;
    }
    printf("Hcf of two number is %d",min);
}



int main(){
// program1();
// program2();
// program3();
program4();
    return 0;
}