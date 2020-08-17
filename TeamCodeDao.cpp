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
	int s=0;
	for(int i=1;i<=n;++i)
	{
		if(n%i==0)
		s+=i;
	}
	return s;
}

void lietKeUocLe(int n)
{
	for (int i = 1; i <= n; i += 2)
	{
		if (n % i == 0)
			cout << i << " ";
	}
}

int tinhTongUocChan(int n)
{
	int sum = 0;
	for (int i = 2; i <= n; i += 2)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}

int tinhTongUocNho(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}
int demSoLuongUoc(int n)
{
	int t=0;
	for(int i=1;i<=n;++i)
	{
		if(i%2==0)
		t++;
	}
	return t;
}
int main()
{
	int n;
	cout << "Nhap vao so nguyen duong n = ";
	cin >> n;
	cout<<"Bai 1 - Cac uoc so nguyen duong cua "<<n<<" :";
	lietKeNguyenDuong(n);
	cout<<endl;
	cout<<"Bai 2 - Tong cac uoc so nguyen duong cua "<<n<<" :"<<sumUocNguyenDuongN(n)<<endl;
	cout<<"Bai 3 - So uoc cua "<<n<<" :"<<demSoLuongUoc(n)<<endl;
	lietKeUocLe(n);
	cout<<"Bai 4 - Tong cac uoc so nguyen duong cua "<<n<<" :"<<sumUocNguyenDuongN(n);
	cout << "\nbai 5 - Tong cac uoc chan cua " << n << " la: " << tinhTongUocChan(n) << endl;
	cout << "\nBai6 - Tong cac uoc nho hon " << n << " la: " << tinhTongUocNho(n) << endl;
	return 0;
}
