#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("Enter the numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
            if(a[0]<a[i])
            {
               a[0]=a[i];
            }



    }
    printf("the greatest number in array is %d",a[0]);

    return 0;
}
