#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	char a[99];
	char s[][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	scanf("%d\n",&n);
	for(int m=0; m<n; m++){
	scanf("%c",&a[0]);
	if(a[0]=='-'){
		printf("fu");
    }
    else{
    	printf("%s",s[a[0]-48]);
    }
    scanf("%c",&a[1]);
	for(i=1;a[i]!='\n';){
		printf(" %s",s[a[i]-48]);
		scanf("%c",&a[++i]);
	}
	printf("\n");
	} 
	
		return 0;
}
