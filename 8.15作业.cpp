#include<stdio.h>
int main(){
	int n;//整型变量n 
	scanf("%d",&n);//输入n 
	double a[n];//定义一个双精度实型数组 
	for(int i=0;i<n;i++){//整型变量i,初始赋值为0 ，i的范围小于n，每次循环+1 
		scanf("%lf",&a[i]);//输入第i个数 
	}
	for (int i=0; i<n; i++) {//整型变量i,初始赋值为0 ，i的范围小于n，每次循环+1 
		if(i<n-1){
			printf("%g ",a[i]);//输出数 
		} 
		else{
			printf("%g",a[i]);//输出数（%g浮点数不显示无意义的零） 
		}
		
	}

}
