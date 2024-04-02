#include <stdio.h>
// int main(){
//     int x=5;
//     x*=3+4;
//     printf("%d",x);
//     return 0;
// }

// int main(){
//     int x=5;
//     x=x*3+4;
//     printf("%d",x);
//     return 0;
// }

// int main(){
//     int num=10;
    
//     if (num>0){
//         printf("positve");
//     }
//     else{
//         printf("non positve");
//     }
//     return 0;
// }

int factorial(int n){
if (n>1)
return n*factorial(n-1);
else return 1;
}

void printFib(int n)
{
if(n<1){
    printf("Invalid number");
    return;
}
int prev1=0;
int prev2=1;

for(int i=1;i<=n;i++){
    if(i>2){
    int num =prev1+prev2;
    prev1=prev2;
    prev2=num;
    printf("%d\t",num);
    }
    if(i==1){
        printf("%d\t",prev1);
    }
    if(i==2){
        printf("%d\t",prev2);
    }
}




}


void review_nakul(){
    int n,orig=0,digit=0,first=1,rev=0;
    printf("enter a no ");
    scanf("%d",&n);
    orig=orig+n;
    while (n/10!=0)
    {
        digit++;
        n=n/10;
    }
    digit++;
    printf("digit is %d\n",digit);

    while (digit>=1)
    {
      first=first*10;
      digit--;
    }
   printf("first value is %d\n",first);
   printf("orig value is %d\n",orig);
    while (first>0)
    {
        
        rev=rev+(orig%10)*(first/10);
        // printf("%d %d\t",(orig%10)*(first/10));
        orig=orig/10;
        first=first/10;
        // printf("%d %d %d\t",rev,orig,first);
    }
    printf("reverse is %d",rev);
}

void lecture_solution_assignment_9_one(){
    int i=1,num;
while (i<=3)
{
    printf("enter a even number");
    scanf("%d",&num);
    if (num%2==0){
       printf("you win"); 
       break;
    }
    i++;
}
if(i==4)
printf("game over"); 
return 0;
}

void lecture_solution_assignment_9_two(){
int flag=1,num,sum=0;
// long sum=0;
    while(flag)
    {
       printf("enter num to calculate sum");
       scanf("%d",&num);
       sum+=num;
       if (num ==0) break;
    }
    printf("sum is %d",sum);
    
}

int main(){
// review_nakul();
lecture_solution_assignment_9_two();

}