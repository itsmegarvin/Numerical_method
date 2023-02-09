/*  x0=1,y0=2,h=0.5,xp=2.5
    ans  y(xp)=18.125
*/
#include<stdio.h>
float f(float x)
{
    return 1+3*x*x; 
}
int main()
{
    int i,n;
    float x,y,h,xp,m1,m2,m3,m4;
    printf("\nenter the value for x,y,h,xp:\n");
    scanf("%f%f%f%f",&x,&y,&h,&xp);
    n=(xp-x)/h;// here if bracket missing then error occurs
    for ( i = 0; i < n; i++)
    {
        m1=h*f(x);
        m2=h*f(x+h/2);
        m3=h*f(x+h/2);
        m4=h*f(x+h);
        y=y+(m1+2*m2+2*m3+m4)/6;
        x=x+h;
    }
    printf("\nthe values of y(%f)=%f\n",xp,y);
    return 0;
}
