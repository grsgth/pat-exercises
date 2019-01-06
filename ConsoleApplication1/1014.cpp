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
	vector<string> secret;
	vector<char> time;
	int min;
	string day[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	
	for (int i = 0; i < 4; i++) {
		string y;
		cin >> y;
		secret.push_back(y);
	}
	int count = 0;
	for (int i = 0; i < secret[0].length()&& i < secret[1].length() &&count<2; i++) {
		if (secret[0][i] == secret[1][i] && (secret[0][i] >= '0'&&secret[0][i] <= '9' || secret[0][i] >= 'A'&&secret[0][i] <= 'N') && count == 1) {
			time.push_back(secret[0][i]);
			break;
		}
		if (secret[0][i] == secret[1][i]&& secret[0][i]>='A'&&secret[0][i]<='G'&&count==0) {
			time.push_back(secret[0][i]);
			count++;
		}
		
	}
	
	for (int i = 0; i < secret[2].length() && i < secret[3].length(); i++) {
		if (secret[2][i] == secret[3][i] && (secret[2][i] >= 'a'&&secret[2][i] <= 'z'|| secret[2][i] >= 'A'&&secret[3][i] <= 'Z')) {
			min=i;
			break;
		}
	}
	cout << day[int(time[0] - 'A')] << " ";
	if (time[1] >= '0' && time[1] <= '9')
		cout<<0<<time[1]<<":";
	else {
		cout<<time[1]-'A'+10<<":";
	}
	if (min< 10) {
		cout << 0;
	}
	cout << min;
	system("pause");
	return 0;
}*/