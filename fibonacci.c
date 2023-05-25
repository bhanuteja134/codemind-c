#include<stdio.h>
int main()
{
    int n,c;
    int a=0,b=1;
    scanf("%d",&n);
    c=a+b;
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}