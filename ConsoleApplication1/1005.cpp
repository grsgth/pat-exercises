#include "stdafx.h"
#include "iostream"
#include "string"
#include "regex"
#include "sstream"
#include<vector>
#include<algorithm>
/*int main()
{
	using namespace std;
	bool compare(int a, int b);
	int n;
	int i = 0;
	int countnum[1000] = { 0 };
	string x,y;
	vector<int> vnum,record,vnumc;
	string num;
	getline(cin,y);
	n = stoi(y);
	getline(cin, num);
	stringstream input(num);
	while (input>>x&&i<n) {
		vnum.push_back(stoi(x));
		i++;
	}
	
	for (vector<int>::iterator it = vnum.begin(); it != vnum.end(); it++) {
		int element = *it;
		while (element != 1) {
			if (element % 2 == 1) {
				element = (element * 3 + 1)/2;
			}
			else {
				element /= 2;
			}
			countnum[element]++;	
		}
	}
	sort(vnum.begin(), vnum.end(), compare);
	for (vector<int>::iterator it = vnum.begin(); it != vnum.end(); it++) {
		if (countnum[*it] == 0) {
			vnumc.push_back(*it);
		}
	}
	for (vector<int>::iterator it = vnumc.begin(); it != vnumc.end()-1; it++) {
		cout << *it<<" ";
	}
	cout << *(vnumc.end() - 1);
	system("pause");

	return 0;
}
bool compare(int a, int b)
{
	return a>b; //升序排列，如果改为return a>b，则为降序
}*/