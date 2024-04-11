/*
1. Write a function to calculate the area of a circle. (TSRS)
2. Write a function to calculate simple interest. (TSRS)
3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
4. Write a function to print first N natural numbers (TSRN)
5. Write a function to print first N odd natural numbers. (TSRN)
*/
#include <stdio.h>

float area_of_circle(float);
float simple_interest(float,float,float);
int check_even(int);
void print_n_natural_number(int);
void print_n_Odd_natural_number(int);

int main(){
    /*
        float area,radius;
        printf("Enter the radius to calculate area of circle ");
        scanf("%f",&radius);
        printf("%f",area_of_circle(radius));         //calling actual parameter
    */

    /*
        float amount,rate,time;
        printf("Enter the Amount rate and time to calculate area of simple interest ");
        scanf("%f%f%f",&amount,&rate,&time);
        printf("%f",simple_interest(amount,rate,time));
    */
    /*
        int num,v=1;
        printf("Enter Number to check whether number even or odd ");
        scanf("%d",&num);
        printf("%d number is %s",num, v==check_even(num) ? "Even" : "Odd" );

    */
    /*
        int num;
        printf("Enter Number to print N natural number ");
        scanf("%d",&num);
        print_n_natural_number(num);

    */
        
    // /*
        int num;
        printf("Enter Number to print N odd natural number ");
        scanf("%d",&num);
        print_n_Odd_natural_number(num);

    // */
    
    return 0;
}

void print_n_Odd_natural_number(int num){
    int i;
    for (i=1;i<=num;i++){
        if(i%2!=0){
            printf("%d",i);
        }
    }
}

void print_n_natural_number(int num){
    int i;
    for (i=1;i<=num;i++){
        printf("%d",i);
    }
}

int check_even(int num){
    if (num%2==0) return 1;
    return 0;
}

float simple_interest(float amount,float rate,float time){
    return (amount*rate*time)/100;
}

float area_of_circle(float radius) //defination of function here paramter called formal parameter
{
    float pi=3.14;
    return pi*radius*radius;
}
