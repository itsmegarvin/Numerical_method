#include<stdio.h>

int main()
{
    float y[10],x[10],xp,l[100],p=0;
    int n,i,j;
    printf("\nEnter how many numbers:\n");
    scanf("%d",&n);
    printf("\nEnter where to interpolate:\n");
    scanf("%f",&xp);
    printf("\nEnter the values for x :\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("\nEnter the values for y :\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    for ( i = 0; i < n; i++)
    {
        l[i]=1;
        for ( j = 0; j < n; j++)
        {
            if(i!=j)
                l[i]=l[i]*((xp-x[j])/(x[i]-x[j]));
            
        }
        p=p+y[i]*l[i];
    }
    printf("\nthe interpolated value of y(%f) is %f ",xp,p);
    
    return 0;
}