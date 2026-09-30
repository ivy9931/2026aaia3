///week04-2bad.cpp 這程式是對的, 用進階 C++迴圈
///但在CodeBlocks 出錯, warning: range-based for only available with...
///2011年之後, 只需要在-std=c++11 或 -std=gnu++11 才能用
///所以,需要改一下設定
///下面是week04 的小考題目SOIT106_ADVANCE_012
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> a;
	int now;
	for(int i=0; i<20; i++){
		cin >> now;
		if(now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans=0;
	for(int num : a){ ///在CodeBlocks 設定出錯時, 永遠跑不出答案
		if(num==now) ans++;
	}
	cout << ans << "\n";
}
