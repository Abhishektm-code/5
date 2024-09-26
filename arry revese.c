#include<stdio.h>
int main()
{
    int a[10];
    printf("array elements \n");
    for(int i=1;i<=10;i++)
    {
        printf(" %d \n",i);
    }
    printf("reversed array elements \n");
    for(int i=10;i>=1;i--)
    {
        printf(" %d \n",i);
    }
    return 0;
}
