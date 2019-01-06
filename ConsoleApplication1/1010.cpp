#include "stdafx.h"
#include "iostream"
#include "string"
#include "regex"
#include "sstream"
#include<vector>
#include<algorithm>
#include <math.h>
using namespace std;
/*int main()
{
	vector<int> count, num;
	string x, y;
	getline(cin, x);

	stringstream input(x);
	while (input >> y) {
		count.push_back(stoi(y));
	}
	if (count.size() == 2 && count[1] == 0) {
		cout << 0 << " " << 0;
	}
	else if (count.size() == 2) {
		cout << count[0] * (count[1] ) << " " << count[1] - 1;
	}
	else {
		for (vector<int>::iterator it = count.begin(); (it < count.end() - 1)&&(*(it+1)!=0); it = it + 2) {
			num.push_back(*it * *(it + 1));
			num.push_back(*(it + 1) - 1);

		}
		for (vector<int>::iterator it = num.begin(); it < num.end() - 1; it++) {
			cout << *it << " ";
		}
		cout << *(num.end() - 1);
	}

	system("pause");
	return 0;
}*/



