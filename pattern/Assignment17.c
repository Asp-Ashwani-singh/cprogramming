#include <stdio.h>

void program1(){
    int row=0,col=0,num=5;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++){
            if(col<=row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void program2(){
    int row=0,col=0,num=5;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++){
            if(col>=6-row){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void program3(){
    int row=0,col=0,num=5;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++)
        {
            if(col<=6-row) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
}

void program4(){
    int row=0,col=0,num=5;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++)
        {
            if(col>=row) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    
}

void program5(){
    int row=0,col=0,num=5;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++)
        {
            if(col<=row) printf("%d",col);
            else printf(" ");
        }
        printf("\n");
    }
}

void program6(){
 int row=0,col=0,num=5;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++)
        {
            if(col<=row) printf("%d",row+1-col);
            else printf(" ");
        }
        printf("\n");
    }
}

void program7(){
    int row=0,col=0,num=5;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++)
        {
            if(col>=row) printf("%c",64+col); //pending
            else printf(" ");
        }
        printf("\n");
    }
}

void program8(){
    int row=0,col=0,num=4,mynum=0;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++)
        {
            if(col<=row) 
            {
                mynum++;
                printf("%d",mynum);
            }
            else printf(" ");
        }
        printf("\n");
    }
}

void program9(){
 int row=0,col=0,num=0;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++)
        {
            if(col>=row) printf("%c",64+col);
            else printf(" ");
        }
        printf("\n");
    }
}

void program10(){
    int row=0,col=0,num=5;
    printf("Enter number to print pattern ");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++)
        {
            if (row==1 || row==num || (row!=1 && col==1) || (row!=1 && col==num) ) printf("*");
            else printf(" ");
        }
        printf("\n");
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
    program10();
    return 0;
}