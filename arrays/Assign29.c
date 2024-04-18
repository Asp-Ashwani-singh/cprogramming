/*
1.Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
2.Write a program to calculate the average of numbers stored in an array of size 10.Take array values from the user.
3.Write a program to calculate the sum of all even numbers and sum of all odd numbers,
 which are stored in an array of size 10. Take array values from the user.
4.Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
5.Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
*/
#include <stdio.h>

int p1(int[],int);
int p2(int[],int);
int p3(int[],int);
int p4(int[],int);
int p5(int[],int);

int p1(int a[],int size){
    int i,sum;
    printf("Enter 10 value array ");
    for (i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,sum=0;i<=9;i++){
        sum+=a[i];
    }
    return sum;
}

int p2(int a[],int n){
    int i,sum;
    printf("Enter 10 number for array ");

    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }

    for (i=0,sum=0;i<=9;i++){
        sum+=a[i];
    }
    return sum/10.0;
}

int p3(int a[],int n){
    int i,even_sum,odd_sum;
    printf("Enter the array of 10 number ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0,even_sum=0,odd_sum=0;i<n;i++){
        if (a[i]%2==0){
            even_sum+=a[i];
        }
        else{
            odd_sum+=a[i];
        }
    }
    printf("odd sum:%d even Sum:%d",odd_sum,even_sum);
}

int p4(int a[],int size){
    int i,j,flag=0;
    printf("Enter %d number for array ",size);
    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
            flag=0;
        for(j=0;j<size;j++){
            if(a[i]>a[j] && i!=j){
                flag++;
            }
            continue;
        }
        if (flag==size-1)
        {
            printf("Greatest Number is %d",a[i]);
            break;
        }
    }
    

}
int p5(int a[],int size){
    int i,j,flag=0;
    printf("Enter %d number for array ",size);
    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
            flag=0;
        for(j=0;j<size;j++){
            if(a[i]<a[j] && i!=j){
                flag++;
            }
            continue;
        }
        if (flag==size-1)
        {
            printf("Smallest Number is %d",a[i]);
            break;
        }
    }
    
}

int main(){
    int a[10];
    p5(a,10);
    return 0;
}