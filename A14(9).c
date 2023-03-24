#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
    for(i=n;i>=0;i--)
    {

        printf("%d ",a[i]);
    }
    return 0;
}
