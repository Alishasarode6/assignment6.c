#include<stdio.h>
int main()
{
    int i,n,a[100],key,flag;
    printf("enter size of array :");
    scanf("%d", &n);

    printf("\n enter data in %d size array :", n);
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("\n enter key to search :");
    scanf("%d", &key);

    flag=0;
    for (i=0; i<n; i++)
    {
        if (a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if (flag=1)
    printf("\n element %d found at %d index which is position %d :", key,i,i+1);
    else
    printf("\n element not found !!!");

    return 0;
}