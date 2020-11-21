#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "num: ";
	cin >> num;    // 輸入變數為50 
	
	for(int x = 1 ; x <= num ; x++)
	{
		if(x%3==0 || x%7==0)  // 3和7的倍數扣除 
			continue;
		cout << x << '\t';    // 依序列印數值 
		if(x==8||x==17||x==25||x==34||x==43)  
		cout << endl;  // 列印到8,17,25,34,43則換行 
	}
}  
