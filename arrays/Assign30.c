/*
1. Write a program to sort elements of an array of size 10. Take array values from the user.
2. Write a program to find second largest in an array. Take array values from the user.
3. Write a program to find the second smallest number in an array. Take array values from the user.
4. Write a program to sort an array of 10 elements in descending order.
5. Write a program in C to copy the elements of one array into another array. Take array values from the user.
*/

#include <stdio.h>
void p1(int[],int);
void swap(int[],int);

void p1(int a[], int size){
    int i,j;
    printf("Enter %d number for array",size);
    for (i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<size-1;i++){
        for (j=0;j<size-1;j++){
            if(a[j]>a[j+1])
            {
                swap(a,j);
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}


void p2(int a[], int size){
    int i,j;
    printf("Enter %d number for array",size);
    for (i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<size-1;i++){
        for (j=0;j<size-1;j++){
            if(a[j]<a[j+1])
            {
                swap(a,j);
            }
        }
    }
    printf("Second Largest number is %d\t",a[1]);
}

void p3(int a[], int size){
    int i,j;
    printf("Enter %d number for array",size);
    for (i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<size-1;i++){
        for (j=0;j<size-1;j++){
            if(a[j]>a[j+1])
            {
                swap(a,j);
            }
        }
    }
    printf("Second smallest number is %d\t",a[1]);
}

void p4(int a[], int size){
    int i,j;
    printf("Enter %d number for array",size);
    for (i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<size-1;i++){
        for (j=0;j<size-1;j++){
            if(a[j]<a[j+1])
            {
                swap(a,j);
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    
}

void p5(int a[], int size){
    int i;
    int b[10];
    printf("Enter %d number for array",size);
    for (i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    for (i=0;i<size;i++){
        b[i]=a[i];
    }

    for(i=0;i<size;i++)
    {
        printf("%d\t",b[i]);
    }
    
}


int main(){
    int a[4];
    p5(a,4);
    return 0;
}


void swap(int a[],int j){
        a[j]=a[j]+a[j+1];
        a[j+1]=a[j]-a[j+1];
        a[j]=a[j]-a[j+1];
}
