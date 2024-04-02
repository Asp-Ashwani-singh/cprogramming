#include <stdio.h>
void program1(){
      int number;
    printf("Enter the number"); 
    scanf("%c",&number);
    if (number==0){
        printf("zero");
    }
    else if(number>0)
    printf("postive");
    else 
    printf("negative");
}

void program2(){
    char c;
    printf("enter the one character to check ");
    scanf("%c",&c);
    if (c>64 && c<91){
        printf("Upper Case");
    }
    else if (c>96 && c<123){
        printf("Lower Case");
    }
    else if (c>=0 && c<=9){
        printf("number");
    }
    else {
        printf("Spacial Character");
    }
}
int greaterNumber(int a,int b,int c){
    if (a>b && a>c){
        return a;
    }
    else if(b>c)
    return b;
    else
    return c;
}

void program3(){
    int a,b,c,flag=0;
    printf("Enter triangle sides");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        if (b+c>a)
        {
            printf("valid triangle");
        }
    }
    else if(b>c && b>a)
    {
       if (c+a>b)
        {
            printf("valid triangle");
        }
    }
    else if (c>a && c>b)
    {
        if (b+a>c)
        {
            printf("valid triangle");
        }
    }
    else
    printf("invalid triangle");

}

void program4(){
    int month;
    printf("Enter Month");
    scanf("%d",&month);
    if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 )
    printf("31 days");
    else if (month==4 || month==6 || month==9 || month==11 )
    printf("30 days");
    else
    printf("28 or 29 days");

}



int main(){
// program1();
program2();
// program3();
// program4();

return 0;
}