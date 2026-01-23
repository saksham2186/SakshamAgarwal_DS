#include<stdio.h>
int main()
{
    int a=8543;
    int rev=0;
    for(a=a;a>0;a=a/10){
    
        rev=rev*10+(a%10);
    }
        printf("reverse a number=%d",rev); 
}