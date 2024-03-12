//1. Write a program to calculate average of three integers. Numbers are given by the user.
//2. Write a program to calculate circumference of a circle.
//3. Write a program to calculate simple interest.
//4. Write a program to calculate volume of a cuboid.
//5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.


/*
1. Write a program to calculate average of three integers. Numbers are given by the user.
#include <stdio.h>
int main(){
    int a,b,c;
    double average;
    printf("Enter Three Number: ");
    scanf("%d%d%d",&a,&b,&c);
    average=(a+b+c)/3;
    printf("%lf",average);
    return 0;
}
2. Write a program to calculate circumference of a circle.
#include <stdio.h>
int main(){
    int r;
    double circumference;
    printf("Enter Radius of circle: ");
    scanf("%d",&r);
    circumference=2*3.14*r;
    printf("%lf",circumference);
    return 0;
}
3. Write a program to calculate simple interest.
#include <stdio.h>
int main(){
    float p,r,d;
    double sm;
    printf("Enter principal amount ,rate and duration: ");
    scanf("%f%f%f",&p,&r,&d);
    sm=(p*r*d)/100;
    printf("%lf",sm);
    return 0;
}
4. Write a program to calculate volume of a cuboid.
#include <stdio.h>
int main(){
    float length,width,height;
    double volume;
    printf("Enter length width height for cuboid: ");
    scanf("%f%f%f",&length,&width,&height);
    volume=length*width*height;
    printf("%lf",volume);
    return 0;
}
5. Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include <stdio.h>
int main(){
    int costPrice,salePrice;
    double totalCost ,totalSale;
    printf("Enter Cost Price: ");
    scanf("%d",&costPrice);
    printf("Enter Sale Price: ");
    scanf("%d",&salePrice);
    totalCost=costPrice*25;
    totalSale=salePrice*25;
    printf("Total profit or loss is %lf ",totalSale-totalCost);
    return 0;
}
*/
#include <stdio.h>
int main(){
    int costPrice,salePrice;
    double totalCost ,totalSale;
    printf("Enter Cost Price: ");
    scanf("%d",&costPrice);
    printf("Enter Sale Price: ");
    scanf("%d",&salePrice);
    totalCost=costPrice*25;
    totalSale=salePrice*25;
    printf("Total profit or loss is %lf ",totalSale-totalCost);
    return 0;
}