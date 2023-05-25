#include<stdio.h>
int main()
{
	int size,i;
	float avg=0,s=0;
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
	 avg=s/size;
	printf("%.2f",avg);
}