#include<iostream>
#include<string>
using namespace std;
int main()
{
    int row=1;//总行数
    string x;
    int num;//总星星数目
    cin>>num>>x;
    //从最中间开始的星星分别往上和往下增加一行
    //增加的两行每次多增加2个星星
    num--;//减掉最中间一行的一颗星
    while(num>=2*(row+2))//2*(row+2)为每增加上下两行所消耗的星星数
    {
        num-=2*(row+2);//星星总数减去新增上下行的星星数目
        row+=2;//行数+2
    }
    int star_num=row;
    //开始画图
    for(int i=1;i<row+1;i++)//从第一行开始打印行数
    {
        //如果是上半部分
        if(i<=row/2)
        {
            //打印每一行开头的空格
            for(int j=0;j<i-1;j++)//j为打印的空格数
            {
                cout<<" ";
            }
            //打印星星
            for(int k=1;k<=star_num;k++)//第一行和最后一行的星星数量与行数相同
            {
                cout<<x;
            }
            star_num-=2;
        }
        else
        {
            //打印每一行开头的空格
            for(int j=0;j<row-i;j++)//下半部分的空格数为最后（第一行）星星数也就是行数-1
            {
                cout<<" ";
            }
            for(int k=1;k<=star_num;k++)
            {
                cout<<x;
            }
            star_num+=2;
        }
        cout<<endl;
    }
    cout<<num<<endl;
    return 0;
}