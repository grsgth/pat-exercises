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
	int N, D;
	bool comp(vector<int> a, vector<int> b);
	vector<vector<int> > mooncake;
	vector<int> temp;
	string y;
	getline(cin, y);
	stringstream input(y);
	input >> y;
	N = stoi(y);
	input >> y;
	D = stoi(y);
	
	for (int i = 0; i < N; i++) {
		cin>> y;
		temp.clear();
		temp.push_back(stoi(y));
		mooncake.push_back(temp);
	}
	
	for (int i = 0; i < N; i++) {
		cin >> y;
		mooncake[i].push_back(stoi(y));
	}
	sort(mooncake.begin(), mooncake.end(), comp);
	/*for (auto ele : mooncake) {
		for (auto elem : ele)
			cout << elem << " ";
		cout << endl;
	}
	double sell=0;
	for (int i = 0; i < N; i++) {
		if (D - mooncake[i][0] <= 0) {
			sell += 1.0 *mooncake[i][1] / mooncake[i][0] * D;
			break;
		}
		else {
			sell += mooncake[i][1];
			D -= mooncake[i][0];
		}
	}
	cout << setiosflags(ios::fixed) << setprecision(2)<<sell;
	return 0;
}
bool comp(vector<int> a, vector<int> b) {
	if ((1.0*a[1] / a[0]) <( 1.0*b[1] / b[0]))
		return false;
	else
		return true;
}*/
