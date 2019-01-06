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
	
	vector<vector<int> > table,all,dlc,not1,other1;
	vector<int> line;
	int s1, s2, s3;
	bool compare(vector<int> a, vector<int> b);
	int N, L, H;
	string x;
	scanf_s("%d %d %d", &N, &L, &H);
	for (int i = 0; i < N; i++) {
		/*string y;
		getline(cin, y);
		stringstream input(y);
		line.clear();
		while (input >> y) {
			line.push_back(stoi(y));
		}*/
		/*scanf_s("%d %d %d", &s1, &s2, &s3);
		line.clear();
		line.push_back(s1);
		line.push_back(s2);
		line.push_back(s3);
		if (line[1] >= H&&line[2] >= H)
			all.push_back(line);
		else if (line[1] >= H&&line[2] >= L)
			dlc.push_back(line);
		else if (line[1] >= L&&line[2] >= L&&line[1] >= line[2])
			not1.push_back(line);
		else if (line[1] >= L&&line[2] >= L)
			other1.push_back(line);
	}

	sort(all.begin(),all.end(), compare);
	sort(dlc.begin(),dlc.end(), compare);
	sort(not1.begin(),not1.end(), compare);
	sort(other1.begin(), other1.end(), compare);
	cout << all.size()+dlc.size()+not1.size()+other1.size()<<endl;
	for (auto ele : all) {
		cout << ele[0] << " " << ele[1] << " " << ele[2] << endl;
	}
	for (auto ele : dlc) {
		cout << ele[0] << " " << ele[1] << " " << ele[2] << endl;
	}
	for (auto ele : not1) {
		cout << ele[0] << " " << ele[1] << " " << ele[2] << endl;
	}
	for (auto ele : other1) {
		cout << ele[0] << " " << ele[1] << " " << ele[2] << endl;
	}
	system("pause");
	return 0;
}
bool compare(vector<int> a, vector<int> b) {
	if ((a[1] + a[2] > b[1] + b[2])|| ((a[1] + a[2] == b[1] + b[2]) && a[1] > b[1])|| ((a[1] + a[2] == b[1] + b[2]) && a[1] == b[1] && a[0] < b[0]))
		return true;
	else
		return false;
}*/