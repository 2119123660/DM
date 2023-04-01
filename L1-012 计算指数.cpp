#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    short n;
    long long sum=0;
    
    cin>>n;
    
    sum=pow(2,n);
    
    cout<<"2^"<<n<<" = "<<sum<<endl;
    return 0;
}