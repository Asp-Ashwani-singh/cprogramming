#include <stdio.h>
#include <stdlib.h>


int power(int n,int pw){
    int i,total=1;
    if(pw==0)
    return 1;
    for (i=1;i<=pw;i++){
    total*=n;
    }
    return total;
}

void signout(){
system("C:\\WINDOWS\\System32\\shutdown /l"); /* logoff */
}

void shutdown(){
    system("C:\\WINDOWS\\System32\\shutdown /s");
}

void decimal_to_binary(){
    int num,binary[32],i=0;
    printf("Enter decimal number ");
    scanf("%d",&num);
    while(num>0){
        binary[i++]=num%2;
        num /= 2;
    }
    for (int j=i-1;j>=0;j--)
    {
        printf("%d",binary[j]);
    }
}

void decimal_to_octel(){
    int num,octel[32],i=0;
    printf("Enter decimal number ");
    scanf("%d",&num);
    while(num>0){
        octel[i++]=num%8;
        num /=8;
    }
    for (int j=i-1;j>=0;j--){
        printf("%d",octel[j]);
    }
}


void binary_to_decimal(){
    long long binary;
    int decimal=0,i=0,rem;
    printf("Enter binary number ");
    scanf("%lld",&binary);
    while(binary!=0){
        rem=binary%10;
        decimal+=rem*power(2,i);
        binary/=10;
        ++i;
    }
    printf("binary number%lld and its decimal is %d",binary,decimal);
}

void binary_to_octel(){

}

void binary_to_hexadecimal(){
    
}

void hexadecimal_to_binary(){
int decimal,i;
printf("Enter decimal number");
scanf("%d",&decimal);



}

int main()
{
    // decimal_to_binary();
    // decimal_to_octel();
    binary_to_decimal();
  
    return 0;
}


