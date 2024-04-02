/*Assignment-11: Iterative Control Statements
1.Write a program to print MySirG 5 times on the screen
2.Write a program to print the first 10 natural numbers.
3.Write a program to print the first 10 natural numbers in reverse order
4.Write a program to print the first 10 odd natural numbers
5.Write a program to print the first 10 odd natural numbers in reverse order.
6.Write a program to print the first 10 even natural numbers
7.Write a program to print the first 10 even natural numbers in reverse order
8.Write a program to print squares of the first 10 natural numbers
9. Write a program to print cubes of the first 10 natural numbers 
10. Write a program to print a table of 5.
*/

#include <stdio.h>

void program1(){
    int num=5;
    while (num>0)
    {
       printf("MySirG\n");
       num--;
    }
}
void program2(){
    int a=1;
    while (a<=10)
    {
       printf("%d\n",a);
       a++;
    }
}
void program3(){
    int a=1;
    while (a<=10)
    {
       printf("%d\n",11-a);
       a++;
    }
}
void program4(){
int num=10,total=10;
while (num>0)
{
  printf("%d\n",2*(total-(num-1))-1);
  num--;
}
}
void program5(){
    int num=10;
while (num>0)
{
  printf("%d\n",2*(num)-1);
  num--;
}
}
void program6(){
    int num=1;
    while(num<=10){
    printf("%d\t",2*num);
    num++;
    }
}
void program7(){
    int num=1;
    while(num<=10){
    printf("%d\t",2*(11-num));
    num++;
    }
}
void program8(){
    int num=1;
    while (num<=10)
    {
       printf("%dx%d=%d\n",num,num,num*num);
       num++;
    }
    
}
void program9(){
    int num=1;
    while (num<=10)
    {
       printf("%dx%dx%d=%d\n",num,num,num,num*num*num);
       num++;
    }
    
}
void program10(){
    int num=1;
    while (num<=10)
    {
       printf("5x%d=%d\n",num,5*num);
       num++;
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