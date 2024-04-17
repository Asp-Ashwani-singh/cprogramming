#include <stdio.h>
/*
1. Write a program to find the Nth term of the Fibonacci series.
2. Write a program to print first N terms of Fibonacci series
3. Write a program to check whether a given number is there in the Fibonacci series or not.
4. Write a program to check whether a given number is an Armstrong number or not
5. Write a program to print all Armstrong numbers under 1000
*/




void program1(){

}

void program2(){
    
    printf("enter N term of fibonacci series");
    scanf("");
    
}
void program3(){
    

}
void program4(){
    int num,count=0,y,sum,rem,i,pow;
    printf("Enter the number ");
    scanf("%d",&num);
    y=num;
    while(y!=0){
        y/=10;
        count++;
    }
    // printf("digit count is %d ",count);
    for (y=num,sum=0;y;y=y/10){
        rem=y%10;
        for(i=1,pow=1;i<=count;i++){
            pow=pow*rem;
        }
        sum=sum+pow;
    }
    if(sum==num){
        printf("%d is armstrong number",num);
    }
    else
    printf("%d is not a armstrong number",num);
}
void program5(){
    int num,count=0,y,sum,rem,i,pow;
    
    for (num=1;num<=1000;num++)
    {
        count=0;
        while(y!=0){
        y/=10;
        count++;
                }
    for (y=num,sum=0;y;y=y/10){
        rem=y%10;
        for(i=1,pow=1;i<=count;i++){
            pow=pow*rem;
        }
        sum=sum+pow;
    }
    if(sum==num)
        printf("%d\t",num);
    }
   
    
}
int  main(){
    
// program1();
// program2();
// program3();
// program4();
program5();

    return 0;
}