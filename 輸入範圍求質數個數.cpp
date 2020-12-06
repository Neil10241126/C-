#include<iostream>
using namespace std;
int main()
{
	int range, count = 0;
	cout << "range : ";
	cin >> range;
	
	for(int i = 2;i <= range;i++)
	{
		bool isPrime = true;
		for(int j = 2;j < i;j++)
			if(i % j == 0)
			{
				isPrime = false;
				break;
			}
		if(isPrime)
		{
			count++;
			cout << i << '\t';
			if(count % 5 == 0)
				cout << endl;
		}
	}
	cout << "\n小於等於" << range << "的質數共有" << count << "個"; 
				
}
