#include<stdio.h>
int main()
{
int num;
printf("number");
scanf("%d",&num);
//true if number is  divisible by five
if(num%5==0)
printf("%d is divisible by five",num);
else
printf("%d is not divisible by five",num);
return 0;
}