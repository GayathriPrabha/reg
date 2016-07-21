#include <stdio.h>
int main()
{
    int a[100],i,n,j;
    printf("Enter the no of reg nos");
    scanf("%d",n);
    printf("Enter the reg nos");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        printf("%d",a[i]);
    }
    return 0;
}
