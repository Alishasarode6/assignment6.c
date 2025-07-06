#include<stdio.h>
int main()
{
    int n, i, a[50],max,min;
    printf("enter size of array :");
    scanf("%d",&n);

    printf("enter data in %d size array :", n);
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);

    max=min=a[0];

    for (i=0; i<n; i++)
    {
        if (a[i]>max)
        max=a[i];

        if (a[i]>max)
        max=a[i];
    }

    printf("\n maximum number is: %d", max);
    printf("\n minimum number is: %d", min);

    return 0;
}