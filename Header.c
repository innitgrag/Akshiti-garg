#include<stdio.h>
#include"myheader.h"

int main()
{
    int a,n,x;
    printf("Enter a choice\n1.Increase\n0. Exit\n");
    scanf("%d",&a);
    if(a==1)
    {
         printf("Enter a number\n");
         scanf("%d",&n);
         printf("Enter a Number\n");
        scanf("%d",&x);

        printf("%d\n",add(n,x));
    }
    return 0;
}