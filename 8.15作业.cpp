#include<stdio.h>
int main(){
	int n;//���ͱ���n 
	scanf("%d",&n);//����n 
	double a[n];//����һ��˫����ʵ������ 
	for(int i=0;i<n;i++){//���ͱ���i,��ʼ��ֵΪ0 ��i�ķ�ΧС��n��ÿ��ѭ��+1 
		scanf("%lf",&a[i]);//�����i���� 
	}
	for (int i=0; i<n; i++) {//���ͱ���i,��ʼ��ֵΪ0 ��i�ķ�ΧС��n��ÿ��ѭ��+1 
		if(i<n-1){
			printf("%g ",a[i]);//����� 
		} 
		else{
			printf("%g",a[i]);//�������%g����������ʾ��������㣩 
		}
		
	}

}
