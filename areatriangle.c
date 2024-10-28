#include<stdio.h>
#include<math.h>
void main()
{
float s,Ar;
int a,b,c;
printf("enter a,b,c:");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2; 
printf("the value of s is%f",s);
Ar=sqrt(s*(s-a)*(s-b)*(s-c));
printf("the area is %f",&Ar);
}
