#include "stdafx.h"
#include "iostream"
#include "string"
#include "regex"
#include "sstream"
#include<vector>
#include<algorithm>
#include <math.h>
#include <iomanip>
/*int main()
{
	using namespace std;
	int b, n;
	vector<int> num;
	cin >> b >> n;
	int count = 0;
	for (int i = 2; i <= 1000000; i = i +1) {
		int count1 = 0;
		int j=2;
		for (j = 2; j <= (int)sqrt(i); j++) {
			if (i%j == 0)
				break;
		}
		if (j >(int)sqrt(i)) {
			count++;
			if (count > n)
				break;
			if (count >= b)
				num.push_back(i);
		}

	}
	int count2 =0;
	for (vector<int>::iterator it = num.begin(); it < num.end()-1; it++) {
		count2++;
		if (count2 == 10) {
			cout <<*it<<endl ;
			count2 = 0;
		}
		else {
			cout << *it << " ";
		}
	}
	if ((num.end() - num.begin() - 1) % 10 == 0&& (num.end() - num.begin())!=1)
		cout << endl << *(num.end() - 1);
	else
		cout << *(num.end() - 1);
	cout << endl << num.size();
	system("pause");
	return 0;
}*/
