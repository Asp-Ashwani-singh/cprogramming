#include <stdio.h>

//1. Write a program to check whether a given number is three digit or not
void program1()
{
    int number,dividenumber;
printf("Enter the nubmer");
scanf("%d",&number);
dividenumber=number/100;
if (dividenumber>=1 && dividenumber <=9){
    printf("three digit");
}else{printf("three digit not");}

}
//2. Write a program to print greater between two numbers. print one number both are same.
void program2()
{
int first,second;
printf("Enter the two nubmer ");
scanf("%d%d",&first,&second);
if (first>second){
    printf("%d",first);
}
else{
    printf("%d",second);
}
}

//3. Write a program to check whether roots of the given quadratic equation are real & distinct ,real & equal or imaginary root
void program3(){

}
//4. Write a program to check whether a given year is a leap or not
void program4(){
    int year;
    printf("Enter the year to check leap or not ");
    scanf("%d",&year);
    if ((year %4==0 && year%100!=0) || year%400==0 ){
        printf("leap year");
    }
    else{
        printf("leap year not");
    }
}


//5. Write a program to find the greatest among three numbers. print number once if the greatest numbere appear  
void program5(){
    int a,b,c;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);
    
    if (a>=b){
        if(a>=c){
            printf("%d is greater",a);
        }
    }
    else if (b>=c)
    {
        printf("%d is greater",b);
    }
    else{
        printf("%d is greater",c);
    }

}


int main(){
// program1();
// program2();
// program3();
// program4();
program5();
    return 0;
}
