#include "stdafx.h"
#include "iostream"
#include "string"
#include "regex"
#include "sstream"
#include<vector>
#include<algorithm>

/*#include <math.h>
int main()
{
	using namespace std;
	int n;
	int ncount = 0;
	vector<int> sunum;
	sunum.push_back(2);
	cin >> n;
	if (n == 1 || n == 2) {
		cout << 0;
	}
	else {
		for (int i = 3; i <= n; i = i +1) {
			int count = 0;
			int j = 2;
			for (j = 2; j <= (int)(sqrt(i)); j = j+1) {
				if (i%j == 0) {
					break;
				}
				if (count == 3)
					break;
			}
			if (j > (int)(sqrt(i))) {
				if (i - *(sunum.end() - 1) == 2) {
					ncount++;
				}
				sunum.push_back(i);
			}
		}
		cout << ncount;

	}
	system("pause");
	return 0;
}*/