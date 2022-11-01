#include<stdio.h>
#include<string.h> 
int main()
{
	int i,N;
	int a[100];
	int b[100];
	char name[100][3];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s %d %d",&name[i],&a[i],&b[i]);
	}
	for(i=0;i<N;i++){
		if(a[i]<15||a[i]>20||b[i]<50||b[i]>70){
			printf("%s\n",name[i]);
		}
	}
	return 0;
}
