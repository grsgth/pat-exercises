#include "stdafx.h"
#include "iostream"
#include "string"
#include "regex"
/*int main()
{
	using namespace std;
	string str[10];
	int n;
	string x;
	int i = 0;
	int j = 0;
	cin >> n;
	regex r("A*PAA*TA*");
	while (i < n) {
		cin >> str[i];
		i++;
	}
	i = 0;
	int count1, count2, count3;

	while (i < n) {
		x = str[i];
		if (regex_match(x, r)) {
			j = 0;
			for (auto y : x) {
				if (y == 'P') {
					count1 = j;
				}
				if (y == 'T')
					count2 = j;
				j++;
			}
			count3 = str[i].length() - count2-1;
			count2 = count2 - count1-1;
			if (count1*count2 == count3)
				cout << "YES"<<endl;
			else
				cout << "NO"<<endl;
		}
		else {
			cout << "NO"<<endl;
		}

		i++;

	}
	return 0;
}*/