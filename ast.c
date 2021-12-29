//armstrong number - the given number is equal to the sum of cube of its every digit//


#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
printf("enter the number=  ");
scanf("%d \n",&n);
temp=n;

while(n>0)

{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}