#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Complex{
public:
	Complex(double r=0.0,double i=0.0);
	~Complex();
	double abscomplex();
private:
	double real;
	double imag;
};
Complex::Complex(double r,double i)
{
	real=r;
	imag=i;
	cout<<"Constructor called."<<endl;
 }
Complex::~Complex()
{
	cout<<"Destructor called."<<endl;
}
double Complex::abscomplex()
{
	double t;
	t=real*real+imag*imag;
	return sqrt(t);
}
int main()
{
	double x,y;
	cin>>x>>y;
	Complex A(x,y);
	cout<<fixed<<setprecision(3)<<A.abscomplex()<<endl;
	return 0;
	
} 
