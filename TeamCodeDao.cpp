#include <iostream>
#include <math.h>
using namespace std;

void lietKeNguyenDuong(int n)
{
	for(int i=1;i<=n;++i)
	{
		if(n % i == 0)
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
bool NTo(int n)
{
	if (n<2) return false;
	for (int i=2;i<=sqrt(n);i++)
		if (n%2==0)
		 return false;
	return true;
}
void UocSoLeLonNhat(int n)
{
	for (int i=n;i>=1;i--)
		if ((n%i==0)&&(i%2!=0))
		{
			cout<< i;
			break;
		}		
}

void KiemTraSoNguyento(int n)
{
	int s = 0;
	if (NTo(n)==true)
		cout<< n <<" la so Nguyen To";
	else
		cout<<n<<" khong la so nguyen to";
}

bool KiemTraSHT(int n)
{
	int s=0;
	for (int i=1;i<n;i++)
	 if (n % i==0)
	 	s+=i;
	if (s==n) return true;
	return false;
}

void KiemTraSoHoanThien(int n)
{
	if (KiemTraSHT(n) == true)
		cout << n << " La so hoan thien";
	else
		cout << n << " la so khong hoan thien";
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
	cout<<"Bai 3 - So uoc cua "<<n<<" :"<<demSoLuongUoc(n) << endl;
	cout<<"Bai 4 - Liet ke cac uoc so LE cua "<<n<<" :";
	lietKeUocLe(n);
	cout << "\nBai 5 - Tong cac uoc chan cua " << n << " la: " << tinhTongUocChan(n) << endl;
	cout << "Bai6 - Tong cac uoc nho hon " << n << " la: " << tinhTongUocNho(n) << endl;
	cout << "Bai 7 - Uoc le lon nhat cua " << n << " la: ";
	UocSoLeLonNhat(n);
    	cout << "\nBai 8 - ";
	KiemTraSoNguyento(n);
	cout << "\nBai 9 - ";
	KiemTraSoHoanThien(n);
	return 0;
}
