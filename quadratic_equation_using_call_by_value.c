#include<stdio.h>
#include<math.h>
int quad(int,int,int);
int main()
{   
    int a,b,c;
    printf("enter a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    quad(a,b,c);

}
int quad(int a,int b,int c)
{
    int d,r1,r2;
    d=b*b-4*a*c;

    if(d>0)
    {
        r1=-b+sqrt(d)/2*a;
        r2=-b+sqrt(d)/2*a;
        printf("roots are real and distinct and roots are r1=%d and r2=%d",r1,r2);
    }
    else if(d==0)
    {
        r1=r2=-b/2*a;
        printf("roots are real and eqaul and roots are r1=%d and r2=%d",r1,r2);
    }
    else
    {
        printf("roots are imaginary");
    }
}