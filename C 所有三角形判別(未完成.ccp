#include<iostream>
using namespace std;
int main()
{
	int a, b, c, check;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	
	if(a+b>c && b+c>a && a+c>b)
	{
		check = true;
		cout << "滿足構成三角形的條件!\n";
	}
	else
	{
		cout << "輸入的數字無法構成三角形!";
		check = false;
	}
		
	if(check)
	{
		int big;
		if(a>b&&a>c)
		{
			cout << "a為最大邊!\n";
			if(a*a>b*b+c*c) cout << "鈍角三角形";
			else if(a*a<b*b+c*c) cout << "銳角三角形";
			else cout << "直角三角形";
		}
		else if(b>a&&b>c)
		{
			cout << "b為最大邊!\n";
			if(b*b>a*a+c*c) cout << "鈍角三角形";
			else if(b*b<a*a+c*c) cout << "銳角三角形";
			else cout << "直角三角形";
		}
		else if(c>a&&c>b)
		{
			cout << "c為最大邊!\n";
			if(c*c>b*b+a*a) cout << "鈍角三角形";
			else if(c*c<b*b+a*a) cout << "銳角三角形";
			else cout << "直角三角形";
		}

	}
}
