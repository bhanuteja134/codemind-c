#include<stdio.h>
int main()
{
	int size,i,s=0;
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<size;i++)
	{
		//printf("%d ",a[i]);
	}
	for(i=0;i<size;i++)
	{
		s=s+a[i];
	}
	printf("%d",s);
}