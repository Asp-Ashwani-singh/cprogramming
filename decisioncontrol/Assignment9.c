#include <stdio.h>
void program1(){
    int cost,sale,profitorloss;
    printf("Enter cost and sale price");
    scanf("%d%d",&cost,&sale);
    profitorloss=sale-cost;
    if(profitorloss>0){
        printf("profit percentage is %d",profitorloss);
    }
    else if(profitorloss<0){
        printf("loss percentage is %d",profitorloss);
    }
    else{
        printf("no profit and no loss percentage is %d",profitorloss);
    }
}

void program2(){
    int subject1,subject2,subject3,subject4,subject5;
    printf("Enter five subject number");
    scanf("%d%d%d%d%d",&subject1,&subject2,&subject3,&subject4,&subject5);
    if (subject1>32 && subject2>32 && subject3>32 && subject4>32 &&subject5>32)
    {printf("pass");} else{printf("failed");}
}

void program3(){
char alph;
int al;
   printf("Enter alphabet "); 
   scanf("%c",&alph);
//    printf("Enter alphabet %d",alph); 
   al=alph;
   if (al >95 && al <124){
    printf("Lower Case %c",alph);
   }
   else if (al >64 && al <91){
    printf("Upper Case %c",alph);
   }
   else{
    printf("not a alphabet");
   }

   

}





void program4(){
    int number;
    printf("Enter the number"); 
    scanf("%c",&number);
    if (number%6==0){
        printf("number divisible by 2 and 3");
    }
    else
    printf("number not divisible by 2 and 3");
}

void program5(){
      int number;
    printf("Enter the number"); 
    scanf("%c",&number);
    if (number%3==0 || number%7==0){
        printf("number divisible by 7 or 3");
    }
    else
    printf("number not divisible by 7 or 3");
}

int main(){
// program1();
// program2();
program3();
// program4();
// program5();
return 0;
}