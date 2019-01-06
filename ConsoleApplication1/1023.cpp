#include "stdafx.h"
#include "iostream"
#include "string"
#include "regex"
#include "sstream"
#include<vector>
#include<algorithm>
#include <math.h>
#include <iomanip>
using namespace std;
/*int main()
{
	string y;
	getline(cin, y);
	vector<int> num;
	stringstream input(y);
	int count = 0;
	int count1 = 0;
	while (input >> y) {
		count = stoi(y);
		while (count > 0) {
			num.push_back(count1);
			count--;
		}
		count1++;
		
	}
	sort(num.begin(), num.end());
	int i = 0;
	for (; i < num.size(); i++) {
		if (num[i] != 0)
			break;
	}
	if (i != num.size()) {
		num[0] = num[i];
		num[i] = 0;
	}
	for (auto ele : num)
		cout << ele;
	system("pause");
	return 0;
}*/
