  
#include <stdio.h>
#include<conio.h>
void main()
{
    int a[7],i,j,t;
    clrscr();
    printf("enter the number of values");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
printf("%d the smallest value",a[i]);
printf("%d the largest value",a[n]);
getch();
}
