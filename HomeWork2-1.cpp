#include<iostream>
using namespace std;
int main()
{
	int num, count = 0; // count代表列印的個數 
	cout << "num: ";
	cin >> num;     // 依題目輸入50 
	
	for(int x = 1 ; x <= num ; x++)
	{
		if(x%3==0 || x%7==0)  // 3和7的倍數扣除 
			continue;
		
		cout << x << '\t';  // 依序列印數值 
		count++;            // 個數遞增 
		if(count%5==0)      // 每五個列印則換行 
		cout << endl;
	}
}  
