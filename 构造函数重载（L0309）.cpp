#include<iostream>
using namespace std;
class Date{
public:
	Date();//声明构造函数 
	Date(int y,int m,int d);//声明带有参数的构造函数
	void showDate();
private:
    int year;
	int month;
	int day; 
};
Date::Date()
{
	year=2016;
	month=3;
	day=8;
}
Date::Date(int y,int m,int d)
{
    year=y;
	month=m;
	day=d;	
}
inline void Date ::showDate()
{
	cout<<year<<"."<<month<<"."<<day<<endl;
}
int main()
{
	int y2,m2,d2;
	Date date1;
	cout<<"Date1 output:"<<endl;
	date1.showDate();	
	cin>>y2>>m2>>d2;

	Date date2(y2,m2,d2);
	cout<<"Date2 output:"<<endl;
	date2.showDate(); 
	return 0;
}
