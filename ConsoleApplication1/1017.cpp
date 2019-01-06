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
	string y,x;
	int jg[1000] = { 0 };
	int z;
	getline(cin, y);
	int cs = 0;
	stringstream input(y);
	input >> y;
	x = y;
	input >> y;
	z = stoi(y);
	for (int i = 0; i < x.size(); i++) {
		cs += x[i]-'0';
		jg[i] = cs / z;
		if (i == x.size() - 1) {
			jg[x.size()] = cs % z;
		}
		cs = 10 * (cs - jg[i] * z);
	}
	int i = 0;
	int jgl = 0;
	while (jg[i] == 0&& i < x.size())
		i++;
	if ( (x.size() == 1 && (x[0] - '0' < z))) {
		cout<<0;
	}
	for (; i < x.size(); i++) {
		cout << jg[i];
	}
	cout << " " << jg[x.size()];
	system("pause");
	return 0;
}*/