#include<stdio.h>
#define N 3
int main()
{
	float a[N];
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%f",&a[i]);
	}
	for(i=0;i<N-1;i++)
	{
		int j=0;
		int t=0;
		for(j=0;j<N-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[i];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%6.1f",a[i]);
		if((i+1)%10==0)
		{
			printf("\n");
		}
	}
	return 0;
}
