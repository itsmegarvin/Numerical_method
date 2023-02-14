#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) x*x*x+x*x-1
#define g(x) 3*x*x+2*x-1
int main()
{
    float x0,g0,f0,x1,f1,e=0.0001;
    printf("\nEnter the initial guess:\n");
    scanf("%d",&x0);
    do
    {
        g0=g(x0);
        f0=f(x0);
        x1=x0-(f0/g0);
        x0=x1;
        f1=f(x1);

    }while(fabs(f1)>e);
    printf("\nthe root is:\n%d",x1);

    return 0;
}