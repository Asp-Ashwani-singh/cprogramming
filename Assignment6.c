#include <stdio.h>

//1. Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD
// int main(){
// float usdPrice =1,inr=84.23,totalinr,amount;
// printf("Enter INR price to convert USD");
// scanf("%f",&amount);
// totalinr=amount * (usdPrice / inr);
// printf("%f",totalinr);
// return 0;
// }
//2.Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

int main(){
    int number,lastdigit,exceptlast;
    printf("Enter the three digit number");
    scanf("%d", &number);
    exceptlast=number/10;
    lastdigit=number%10;
    printf("orginal digit %d and its one postion toward right digit id %d%d",number,lastdigit,exceptlast);
return 0;
}


//3.What will be the value stored in the variable x after executing following statement: x=10>8>4;
// int main(){
//     int x=10>8>4;
// printf("%d",x);
// return 0;
// }
//4. What will be the value stored in the variable x after executing following statement:x=!2>-2;
// int main(){
//     int x=!2>-2;
//     printf("%d",x);
//     return 0;
// }
//5. 5. What will be the value stored in the variable x after executing following statement: x=3<0&&5>0;
// int main(){
//     int x=x=3<0&&5>0;
//     printf("%d",x);
//     return 0;
// }