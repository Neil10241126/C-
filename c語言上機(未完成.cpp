#include<iostream>
using namespace std;
int main()
{
	int k, n;
	cout << "k: ";
	cin >> k;
	cout << "n: ";
	cin >> n;
	switch(k)
	{
		case 1:
			{
				for(int i=1; i<=n; i++)
				{
					cout << '\n';
					for(int j=1; j<=i; j++)
						cout << "*\t";
				}
				break;
			}
		case 2:
			{
				for(int i=1; i<=n; i++)
				{
					cout << '\n';
					for(int j=n; j>i; j--)
						cout << " ";
					for(int k=1; k<=i; k++)
						cout << "*";
				}
				break;
			}
		case 3:
			{
				for(int i=1; i<=n; i++)
				{
					cout << '\n';
					for(int j=)
				}
			}
	}
}
