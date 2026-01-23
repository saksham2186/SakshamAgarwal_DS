#include<stdio.h>
int main()
{
int a=567;
int sum=0;
for(a=a;a>0;a=a/10){
    sum=sum+(a%10);
}
    printf("sum of digit=%d",sum);

}