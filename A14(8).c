#include<stdio.h>
int main()
{
    int a[10],i,temp,FS,SS;
    printf("Enter the numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    FS=SS=temp;
    for(i=0;i<=9;i++)
    {
        if(a[i]<FS)
        {
            SS=FS;
            FS=a[i];
        }
        else if(a[i] !=FS && a[i]<SS )
        {
            SS=a[i];
        }
    }
    if(SS==temp)
    {
        printf("The second smallest element is not found");
    }
    else
    {
        printf("the second smallest element is %d",SS);
    }
    return 0;
}

