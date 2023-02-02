#include<stdio.h>
#include<math.h> 
float f(float x)
{
    return x*x-x-2;
}
int main()
{
    float x1,x2,e=0.0001,f0,f1,x0,f2;
    do
    {
        printf("\nEnter the values for x1 and x2:\n");
        scanf("%f%f",&x1,&x2);
        f1=f(x1);
        f2=f(x2);
    }while(f1*f2>0);
    here:
    x0=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
    f0=f(x0);
    if(f1*f0<0)  //both f1 and f2 have diff sign 
    {
        x2=x0;
        f2=f0;
    }
    else
    {
        x1=x0;
        f1=f0;
    }
    if(fabs(f0)>e)
        goto here;
    else
        printf("%f",x0);
    return 0;
}