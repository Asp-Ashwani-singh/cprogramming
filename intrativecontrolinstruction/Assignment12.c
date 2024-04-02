#include <stdio.h>
/*
Assignment-12: while loop
1.Write a program to print MySirG N times on the screen
2.Write a program to print the first N natural numbers.
3.Write a program to print the first N natural numbers in reverse order
4.Write a program to print the first N odd natural numbers
5.Write a program to print the first N odd natural numbers in reverse order.
6.Write a program to print the first N even natural numbers
7.Write a program to print the first N even natural numbers in reverse order
8.Write a program to print squares of the first N natural numbers
9.Write a program to print cubes of the first N natural numbers 
10.Write a program to print a table of N.
*/

void program1(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("MySirG\n");
       i++;
    }
}
void program2(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("%d\n",i);
       i++;
    }
}
void program3(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("%d\n",num+1-i);
       i++;
    }
}
void program4(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("%d\n",2*i-1);
       i++;
    }
}
void program5(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("%d\n",2*(num+1-i)-1);
       i++;
    }
}
void program6(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("%d\n",2*i);
       i++;
    }
}
void program7(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("%d\n",2*(num+1-i));
       i++;
    }
}
void program8(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("%d\n",i*i);
       i++;
    }
}
void program9(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=num)
    {
       printf("%d\n",i*i*i);
       i++;
    }
}
void program10(){
    int num ,i=1;
    printf("Enter the Number for visible ");
    scanf("%d",&num);
    while (i<=10)
    {
       printf("%dx%d=%d\n",num,i,num*i);
       i++;
    }
}
int main(){
    // program1();
    // program2();
    // program3();
    // program4();
    // program5();
    // program6();
    // program7();
    // program8();
    // program9();
    // program10();
    return 0;
}
