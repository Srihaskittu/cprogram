#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float r1,r2,d;
printf("enter a,b,c:");
scanf("%d%d%d",&a,&b,&c);
d=((b*b)-(4*a*c));
if(d>0){
r1=(-b+sqrt(d))/2*a;
r2=(-b-sqrt(d))/2*a;
printf("the real roots = %f%f", r1, r2);
}
else if  (d==0){
r1=-b/(2*a);
r2=-b/(2*a);
printf("roots are equal = %f%f", r1, r2);
}
else{
    printf("roots are imaginary");
}
}
