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
	int N;
	getline(cin, y);
	N=stoi(y);
	char a,b;
	int count[3] = { 0 };
	int count1[26] = { 0 };
	int count2[26] = { 0 };
	vector<int> count3[2];
	for (int i = 0; i < N; i++) {
		getline(cin,y);
		a = y[0];
		b = y[2];
		if (a == b)
			count[1]++;
		else if (a == 'C'&&b == 'J' || a == 'J'&&b == 'B' || a == 'B'&&b == 'C') {
			count[0]++;
			count1[a - 'A']++;
		}
		else {
			count[2]++;
			count2[b - 'A']++;
		}
	}
	cout << count[0] << " " << count[1] << " " << count[2] << endl;
	cout << count[2] << " " << count[1] << " " << count[0] << endl;

	if (count1[1] >= count1[2] && count1[1] >= count1[9])
		cout << 'B';
	else if (count1[2] >= count1[1] && count1[2] >= count1[9])
		cout << 'C';
	else
		cout << 'J';

	cout << " ";

	if (count2[1] >= count2[2] && count2[1] >= count2[9])
		cout << 'B';
	else if (count2[2] >= count2[1] && count2[2] >= count2[9])
		cout << 'C';
	else
		cout << 'J';
	system("pause");
	return 0;
}*/