#include<stdio.h>
int main()
{
    int a1[50],a2[50],i,n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a1[i]);
    }
    for(i=0;i<=n;i++)
    {
        a2[i]=a1[i];
    }
    printf("The copied array is :");
    for(i=0;i<=n;i++)
    {
        printf("%d ",a2[i]);
    }
    return 0;
}
