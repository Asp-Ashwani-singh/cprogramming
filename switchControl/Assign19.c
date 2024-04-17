#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

void program1(){
    int n;
    printf("Enter month number to print days");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("31 day");
            break;
        case 2:
            printf("28 or 29 day");
            break;
        case 3:
            printf("31 day");
            break;
        case 4:
            printf("30 day");
            break;
        case 5:
            printf("31 day");
            break;
        case 6:
            printf("30 day");
            break;
        case 7:
            printf("31 day");
            break;
        case 8:
            printf("31 day");
            break;
        case 9:
            printf("30 day");
            break;
        case 10:
            printf("31 day");
            break;
        case 11:
            printf("30 day");
            break;
        case 12:
            printf("31 day");
            break;

        default:
        printf("Not a Month");
    }

}


void program2(){
    int n;
    while(n!=5){
    printf("1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Exit\n");
    printf("Enter number to select menu ");
    scanf("%d",&n);
    switch(1){
        case 1:
            printf("Addition");
            break;
        case 2:
            printf("Substraction");
            break;
        case 3:
            printf("Multiplication");
            break;
        case 4:
            printf("Division");
            break;
        case 5:
            exit(0); // terminate the program 
        default:
            printf("invalid menu retry again");
    }
    }
}
void program3(){
    int day;
    printf("Enter day number of week ");
    scanf("%d",&day);
    
    switch(day){
     case 1:
            printf("Sunday");
            break;
        case 2:
            {
            setlocale(LC_ALL, "hi_IN.UTF-8");
            const wchar_t *hindi_text = L"जय महाकाल";
            wprintf(L"%ls",hindi_text);
            break;
            }
            
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("invalid menu retry again");
    }
}

void program4(){
    int n=1,a,b,c;
    while(n!=4){
        printf("1.Isosceles Triangle \n 2.Right Triangle\n 3.Equilateral Triangle\n 4.Exit\n");
        printf("Enter number to select menu ");
        scanf("%d",&n);
        printf("Enter Side of trinagle");
        scanf("%d%d%d",&a,&b,&c);

        switch (n)
        {
        case 1:
            if (a==b || a==c || b==c )
            printf("Right Triangle");
            else
            printf("Not Right Triangle");
            break;

        case 2:
            if ((a*a==b*b+c*c)|| (b*b==a*a+c*c) || (c*c==a*a+b*b) )
            printf("Isosceles Triangle");
            else
            printf("Not Isosceles Triangle");
            break;

        case 3:
            if (a==b && a==c )
            printf("Equilateral Triangle");
            else
            printf("Not Equilateral Triangle");
            break;
        
        default:
            break;
        }
    }

}

void program5(){
int n;
printf("Enter number");
scanf("%d",&n);
switch(n){
    case 1:
        printf("good");
        break;
    case 2:
        printf("better");
        break;
    case 3:
        printf("best");
        break;
    default:
        printf("invalid");
}
}

int main(){
    // program1();
    // program2();
    program3();
    // program4();
    // program5();
    return 0;
}