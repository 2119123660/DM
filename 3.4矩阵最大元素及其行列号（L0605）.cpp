#include<stdio.h>
int main()
{
	int i=0;
	int m,n;
	int j=0;
	int a[3][4];
	int max=-1e9;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]>max) 
			{
				max=a[i][j];
				m=i;
				n=j;
			}
		}
	}
	printf("max=%d,row=%d,col=%d",max,m,n);
	return 0;
}
