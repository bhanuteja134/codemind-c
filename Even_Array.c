#include<stdio.h>
int main()
{
	int n,i,s=0,k=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			
		k++;
		//s=s+a[i];
     	}
}
    if(k==0)
    {
        printf("True");
    }
    else
    {
	printf("False");
    }
}