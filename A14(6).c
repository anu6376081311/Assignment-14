#include<stdio.h>
int main()
{
    int a[10],i,j,x;
    printf("Enter the numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=8;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
            {
               x = a[i];
               a[i] = a[j];
               a[j] = x;
            }

        }

    }
    printf("The element in ascending order is :");
    for(i=0;i<=9;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}


