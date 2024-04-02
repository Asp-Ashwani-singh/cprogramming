#include <stdio.h>
/*
Assignment-13: Use any loop
1. Write a program to calculate sum of first N natural numbers 
2. Write a program to calculate sum of first N even natural numbers 
3. Write a program to calculate sum of first N odd natural numbers
4. Write a program to calculate sum of squares of first N natural numbers 
5. Write a program to calculate sum of cubes of first N natural numbers
*/


void program1(){
    int num,i=1,total=0;
    printf("Enter number to calculate sum ");
    scanf("%d",&num);
    while (i<=num)
    {
        total+=i;
        i++;
    }
    printf("sum of %d natural number is =%d",num,total);
}
void program1_1(){
    int num;
    printf("Enter number to calculate sum "); 
    scanf("%d",&num);
    printf("sum of %d natural number is =%d",num,num*(num+1)/2);
}

void program2(){
    int num,i=1,total=0;
    printf("Enter number to calculate sum ");
    scanf("%d",&num);
    while (i<=num)
    {
        total+=2*i;
        i++;
    }
    printf("sum of %d natural even number is =%d",num,total);
}
void program2_2(){
    int num;
    printf("Enter number to calculate sum "); 
    scanf("%d",&num);
    printf("sum of %d natural even number is =%d",num,num*(num+1));
}

void program3(){
    int num,i=1,total=0;
    printf("Enter number to calculate sum ");
    scanf("%d",&num);
    while (i<=num)
    {
        total+=2*i-1;
        i++;
    }
    printf("sum of %d natural odd number is =%d",num,total);
}
void program3_3(){
    int num;
    printf("Enter number to calculate sum "); 
    scanf("%d",&num);
    printf("sum of %d natural odd number is =%d",num,(num*num));
}

void program4(){
    int num,i=1,total=0;
    printf("Enter number to calculate sum ");
    scanf("%d",&num);
    while (i<=num)
    {
        total+=i*i;
        i++;
    }
    printf("sum of %d natural odd number is =%d",num,total);
}
void program4_4(){
    int num;
    printf("Enter number to calculate sum "); 
    scanf("%d",&num);
    printf("sum of %d natural odd number is =%d",num,(num*(num+1)*(2*num+1))/6);
}
void program5(){
    int num,i=1,total=0;
    printf("Enter number to calculate sum ");
    scanf("%d",&num);
    while (i<=num)
    {
        total+=i*i*i;
        i++;
    }
    printf("sum of %d natural odd number is =%d",num,total);
}
void program5_5(){
    int num;
    printf("Enter number to calculate sum "); 
    scanf("%d",&num);
    printf("sum of %d natural odd number is =%d",num,(num*num)*((num+1)*(num+1))/4);
}

int main(){
    // program1();
    // program1_1();
    // program2();
    // program2_2();
    // program3();
    // program3_3();
    // program4();
    // program4_4();
    // program5();
    program5_5();
    return 0;
}

