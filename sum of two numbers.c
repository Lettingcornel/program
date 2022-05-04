//Function to find sum of 2 numbers
#include<stdio.h>
int add (int p,q);
//function prototype
int main()
{
int j,k,sum;
printf("Enter the first number:\n");
scanf("%d",&j);
printf("Enter the second number:\n");
scanf("%d",&k);sum= j+k;
// calling functionprintf("\n The sum of %d and %d is %d",a,b, add(a,b)); 
return 0;
}
int add(int p, q)
// function definition
{
int sum;sum=p+q;
return( sum);
}