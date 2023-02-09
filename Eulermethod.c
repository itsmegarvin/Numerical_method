/*  x0=1,y0=2,h=0.5,xp=2.5
    ans  y(xp)=14.375
*/
#include<stdio.h>
float f(float x)
{
    return 1+3*x*x;
}
int main()
{
    int i,n;
    float x,y,h,xp;
    printf("\nenter the initial values:\n");
    scanf("%f%f",&x,&y);
    printf("\nenter the step size:\n");
    scanf("%f",&h);
    printf("\nenter the value for xp:\n");
    scanf("%f",&xp);
    n=(xp-x)/h; // here if bracket missing then error occurs
    for ( i = 1; i <= n; i++)
    {
        y=y+h*f(x);
        x=x+h;
    }
    printf("\nthe values of y(%f)=%f\n",xp,y);
    return 0;
}