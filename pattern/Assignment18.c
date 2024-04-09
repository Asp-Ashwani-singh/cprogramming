#include <stdio.h>

void program1(){
    int row=0,col=0,n=5;
    printf("Enter Number to print pattern");
    scanf("%d",&n);
    for(row=1;row<=4;row++){
        for(col=1;col<=7;col++){
            if(col>=n-row && col<=n-2+row)
            {
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
    int row,col,n=8;
    printf("Enter the number to print pattern");
    scanf("%d",&n);
    for (row=1;row<=n-4;row++){
        for (col=1;col<=n-1;col++){
            if(col>=row && col<=n-row) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

void program3(){
   int row=0,col=0,n=5;
    for(row=1;row<=4;row++){
        for(col=1;col<=7;col++){
            if(col>=n-row && col<=n-2+row)
            {
                if(row%2==0 && col%2!=0 )
                    printf("*");
                else if (row%2!=0 && col%2==0 )
                    printf("*");
                else
                printf(" ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void program4(){
    int row,col,n=5;
    for (row=1;row<=4;row++){
            int k=0;
        for (col=1;col<=7;col++){
            if(col<=n-2+row && col>=n-row)
            {
            if(col<=4) 
            {
            printf("%d",++k);
            }
            else
            {
            printf("%d",--k);
            }
            
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}
void program5(){
    int row,col,n=5;
    for (row=1;row<=4;row++){
            int k=64;
        for (col=1;col<=7;col++){
            if(col<=n+3-row && col>=row)
            {
            printf("%c",++k);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}

void program6(){
    int row,col,n=5;
    for (row=1;row<=4;row++){
            int k=64;
        for (col=1;col<=7;col++){
            if(col<=n+3-row && col>=row)
            {
                if(col<=4)
                printf("%c",++k);
                else
                printf("%c",--k);
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}

void program7(){
    int row,col,n=5;
    for (row=1;row<=5;row++){
            int k=1;
        for (col=1;col<=9;col++){
            if(col<=4+row&& col>=6-row)
            {
                if(row%2!=0 && col%2==0)
                printf("%d", k);
                else if(row%2==0 && col%2!=0)  printf("%d", k);
                else printf("0");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
}//pending logic


int main(){
    // program1();
    // program2();
    // program3();
    // program4();
    // program5();
    // program6();
    program7();
    // program8();
    // program9();
    // program10();
    return 0;
}