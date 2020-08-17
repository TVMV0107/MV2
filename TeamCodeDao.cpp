#include <iostream>
using namespace std;
void lietKeNguyenDuong(int n)
{
	for(int i=1;i<=n;++i)
	{
		if(i%2==0)
		cout<<i<<" ";
	}
}
int sumUocNguyenDuongN(int n)
{
	for(int i=1;i<=n;++i)
	{
		if(n%i==0)
		
	}
}
int main()
{
	int n;
	cout<<"Nhap N: ";
	cin>>n;
	cout<<"Cac so nguyen duong nho hon "<<n<<" :";
	lietKeNguyenDuong(n);
	return 0;
}
