#include<stdio.h>
int main()
{
    int a[10],i,temp,FL,SL;
    printf("Enter the numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    FL=SL=temp;
    for(i=0;i<=9;i++)
    {
        if(a[i]>FL)
        {
            SL=FL;
            FL=a[i];
        }
        else if(a[i]<FL && a[i]>SL )
        {
            SL=a[i];
        }
    }
    if(SL==temp)
    {
        printf("The second largest element is not found");
    }
    else
    {
        printf("the second largest element is %d",SL);
    }
    return 0;
}
