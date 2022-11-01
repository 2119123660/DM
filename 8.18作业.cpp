#include<stdio.h>
#include<string.h>
int main()
{
	int j,i;
	long long N;
	double m;
	scanf("%lld",&N);
	double a[N];
	for(i=0;i<N;i++){
		scanf("%lf",&a[i]);
    }
    for(i=0;i<N;i++){
		for(j=i;j<N;j++){
			long long min=a[i];
		    if(a[j]<a[i]){
				min=a[j];
				a[j]=a[i];
			    a[i]=min;
		    }
	    }
	}
	if(N%2==1){
		m=a[(N-1)/2];
		printf("%.1f",m);
    }
    else{
    	m=a[N/2]+a[N/2-1];
    	m/=2;
    	printf("%.1f",m);
    }
    return 0;
}
