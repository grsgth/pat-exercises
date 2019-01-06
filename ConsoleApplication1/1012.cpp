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
	int n;
	string y;
	vector<int> num;
	int flag2 = 1;
	int A[5] = { 0 };
	int B[5] = { 0 };
	string N = "N";
	getline(cin, y);
	stringstream input(y);
	setiosflags(ios::fixed);
	while (input >> y) {
		num.push_back(stoi(y));
	}
	for (vector<int>::iterator it = num.begin() + 1; it < num.end(); it++) {
		
		if (*it % 5 == 0 && *it % 2 == 0) {
			A[0] = A[0] + *it;
			B[0]++;
		}
		if (*it % 5 == 1) {
			if (flag2 == 1) {
				A[1] = A[1] + *it;
				flag2 = 0;
			}
			else {
				A[1] = A[1] - *it;
				flag2 = 1;
			}
			B[1]++;
		}
		if (*it % 5 == 2) {
			A[2] = A[2] + 1;
			B[2]++;
		}
		if (*it % 5 == 3) {
			A[3] = A[3] + *it;
			B[3]++;
		}
		if (*it % 5 == 4) {
			if (*it > A[4]) {
				A[4] = *it;
				B[4]++;
			}
		}
	}
	if (B[0] == 0) {
		cout << "N ";
	}
	else {
		cout << A[0]<<" ";
	}

	if (B[1] == 0) {
		cout << "N ";
	}
	else {
		cout << A[1] << " ";
	}
	if (B[2] == 0) {
		cout << "N ";
	}
	else {
		cout << A[2] << " ";
	}
	if (B[3] == 0) {
		cout << "N ";
	}
	else {
		float f = float(A[3]) / float(B[3]);
		printf("%.1lf ",f);
	}
	if (B[4] == 0) {
		cout << "N";
	}
	else {
		cout << A[4];
	}
	system("pause");
	return 0;
}*/
