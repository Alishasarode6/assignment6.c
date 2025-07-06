#include<stdio.h>
int main()
{
    int n,i,a[100],key,cnt;
    printf("enter size of array :");
    scanf("%d", &n);

    printf("\n enter data in %d size array:", n);
    for (i=0; i<n; i++)
    scanf("%d", &a[i]);

    printf("\n enter key to search :");
    scanf("%d", &key);

    for (i=0; i<n; i++)
    {
        if (a[i]==key)
        cnt++;
    }

    if (cnt==0)
    printf("not found");
    else
    printf("\n count of occurence of key %d in array is :%d", key,cnt);

    return 0;
}