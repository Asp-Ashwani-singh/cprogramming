#include <stdio.h>

// 1.Write a Program to print Hellow Students on the screen.
void program1(){
    printf("Hellow");
}

// 2. Write a program to print Hello in the first line and Students in the second line.
void program2(){
printf("Hello\nStudents");
}
//3.Write a program to print "MySirG" on the screen. (Remember to print in double quotes)
void program3(){
printf("\"MySirG\"");
}

//4. Write a program to print \n on the screen.
void program4(){
    printf("\\n");
}
// 5. Write a program to print \r on the screen.
void program5(){
    printf("\\r");
}

// 6. Write a program to print "Teacher's Day" on the screen. (Remember to print double and single quotes)
void program6(){
    printf("\"Teacher's Day\"");
}

// 7. Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.
int program7(){
    int a ,b;
    printf("Please Enter Two Number for sum: ");
    scanf("%d%d",&a,&b);
    return a+b;
}
// 8. Write a program to calculate square of a given number. Number is entered by the user.
int program8(){
    int number;
    printf("Enter Number To Calculate Sqare: ");
    scanf("%d",&number);
    return number*number;
}
// 9. Write a program to calculate area of a rectangle. Input appropriate data from the user.
int program9(){
    int length ,width;
    printf("Enter Length And width To Calcluate Area: ");
    scanf("%d%d",&length,&width);
    return length*width;
}
// 10. WAP to find the area of the circle. Take radius of circle from user as input.
float program10(){
    int radius;
    printf("Enter radius To Calcluate Area: ");
    scanf("%d",&radius);
    return 3.14*radius*radius;
}

int main(){
    //program1();
    //program2();
    //program3();
    //program4();
    //program5();
    //program6();
    //printf("%d",program7());
    //printf("%d",program8());
    //printf("%d",program9());
    //printf("%f",program10());
    return 0;
}

