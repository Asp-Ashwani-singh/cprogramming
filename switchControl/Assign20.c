#include <stdio.h>


void program1(){
int m1,m2,m3,m4,m5,num=6;
float average=0;
printf("Enter marks of test");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
average=(m1+m2+m3+m4+m5)/5;

if (average>=90 && average<=100)
num=0;
else if (average>=80 && average<=90)
num=1;
else if (average>=70 && average<=80)
num=2;
else if (average>=60 && average<=70)
num=3;
else if (average>=50 && average<=60)
num=4;
else if (average<=50)
num=5;

switch(num){
    case 0:
        printf("Grade A");
        break;
    case 1:
        printf("Grade B");
        break;
    case 2:
        printf("Grade C");
        break;
    case 3:
        printf("Grade D");
        break;
    case 4:
        printf("Grade E");
        break;
    case 5:
        printf("Grade F");
        break;
    default:
        printf("invalid");
}
}

void program2(){
    int n=10;
    while (n!=5)
    {
    printf("Please select ------------ menu item\n");
    printf("1.Factorial of number\n2.Check Event or Odd\n3.Area of circle\n4.Sum of first N natural number\n5.Exit\n");
    scanf("%d",&n);
    int num,factorial,orgnum=0;
    float pi=3.17,radius=0;

    switch(n){
        case 1:
                factorial=1;
                printf("Enter number to calculate factorial\n");
                scanf("%d",&num);
                orgnum=num;
                if(num<1) 
                {
                    printf("Number must be positive\n");
                    break;
                }
                while(num!=0)
                {
                factorial*=num;
                num--;
                }
                printf("Factorial of %d is %d\n",orgnum,factorial);
                break;
        case 2:
            printf("Enter number to check even or odd\n");
            scanf("%d",&num);
            if(num%2==0){
                printf("%d is even\n",num);
            }
            else{
               printf("%d is odd\n",num); 
            }
            break;

        case 3:
            printf("Enter radius of circle");
            scanf("%f",&radius);
            printf("Area of Circle %f\n",pi*radius*radius);
            break;

        case 4:
            printf("Enter number to calculate natural number");
            scanf("%d",&num);
            printf("Sum of  number is %d\n",num*(num+1)/2);
            break;
        case 5:
            break;
        default:
            printf("Invalid option");
    }
    }
}

void program3(){
    char c;
    printf("Enter character to check whether Upper,Lower....");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
        printf("lower case");
        break;
    
    default:
        break;
    }
}

void program4(){
    char c;
    printf("Enter character to check whether vovel or consonent....");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is vovel",c);
        break;
    default:
        printf("%c is consonent",c);
        break;
    }
}


void lcm(){
    int a,b,max;
    printf("Enter two digit to find lcm ");
    scanf("%d%d",&a,&b);
    for (max=a>b?a:b;max<=a*b;max++)
    {
        if(max%a==0 && max%b==0)
        break;
    }
    printf("Lcm of %d and %d is %d\n",a,b,max);

}

void sum_of_digit(){
    int num,digitsum=0,rem=0;
    printf("Enter number to find");
    scanf("%d",&num);
    while(num!=0){
        digitsum+=num%10;
        num=num/10;
    }
    printf("sum of digit is %d\n",digitsum);
}

void volume_of_cuboid(){
    int l,w,h;
    printf("Please Enter l w h");
    scanf("%d%d%d",&l,&w,&h);
    printf("Voulume of Cuboid is %d\n",l*w*h);
}

void check_prime(){
    int num,i=3;
    printf("Enter the number to check prime or not ");
    scanf("%d",&num);
    for (i=3;i<num;i++){
        if(num%i==0){
            printf("Not a Prime Number\n");
            break;
        }
    }
    if(num==i){
        printf("Prime number\n");
    }

}

void program5(){
    int n=10;

    while(n!=5){
        printf("Please select One From Menu\n");
        printf("1.Calculate LCM of two numbers\n2.Calculate sum of the digits of a number\n");
        printf("3.Volume of cuboid\n4.Check Whether a given number is prime or not\n5.Exit.");
        scanf("%d",&n);
        switch(n){
            case 1:
                lcm();
                break;
            case 2:
                sum_of_digit();
                break;
            case 3:
                volume_of_cuboid();
                break;
            case 4:
                check_prime();
                break;
            case 5:
                break;
            default:
                printf("invalid option");
                break;
        }
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