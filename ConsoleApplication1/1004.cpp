#include "stdafx.h"
#include "iostream"
#include "string"
#include "regex"
#include "sstream"
#include<vector>
/*int main()
{
	using namespace std;
	string str[1000];
	vector<string> str1[1000];
	string result;
	string x;
	string y;
	int n;
	int i, j, k;
	i = j = k = 0;
	getline(cin,y);
	n = stoi(y);

	while (i < n) {
		getline(cin, str[i]);
		i++;
	}
	i = 0;
	while (i < n) {
		x = str[i];
		stringstream input(x);
		while (input >> result) {
			str1[i].push_back(result);

		}
		i++;
	}
	int score[1000];
	for (i = 0; i < n; i++) {
		score[i] = stoi(str1[i][2]);
	}
	int max, min;
	max = min = score[0];
	int q, w;
	q = w = 0;
	for (i = 0; i < n; i++) {
		if (score[i] > max) {
			max = score[i];
			q = i;
		}
		if (score[i] <min) {
			min = score[i];
			w = i;
		}
	}
	cout << str1[q][0] <<" " << str1[q][1] << endl;
	cout << str1[w][0]<<" "<< str1[w][1] << endl;

	return 0;
}*/