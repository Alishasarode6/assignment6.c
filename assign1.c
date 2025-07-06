#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0;
    printf("enter size of ARRAY :");
    scanf("%d", &n);

    printf("enter data in %d size ARRAY :",n);
    for (i=0; i<n; i++)
    scanf("%d",&a[i]);

    for (i=0; i<n; i++)
    sum+=a[i];
    
    printf("\n sum is :%d", sum);
    printf("\n average is :%.2f",(float)sum/n);

    return 0;

}