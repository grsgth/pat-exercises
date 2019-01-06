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
	string y,xs,js;
	char fuhao = NULL;
	char fuhao1 = NULL;
	getline(cin, y);
	if (y[0] == '-')
		fuhao = '-';
	int flag = 0;
	for (int i = 1; i < y.length(); i++) {
		if (i == 2)
			i++;
		if (y[i] == 'E') {
			flag = 1;
			i++;
			fuhao1 = y[i];
			i++;
		}
		if (flag == 0)
			xs.append(to_string(y[i]-'0'));
		if (flag == 1) {
			js.append(to_string(y[i]-'0'));
		}
	}
	int jsi = stoi(js);
	if (fuhao1 == '-') {
		if (fuhao) {
			cout << fuhao;
		}
		cout << "0.";
		for (int i = 0; i < jsi - 1; i++)
			cout << 0;
		cout << xs;
	}
	else {
		if (fuhao) {
			cout << fuhao;
		}
		if (jsi >= xs.length() - 1) {
			
			cout << xs;
			for (int i = 0; i < jsi - xs.length() + 1; i++)
				cout << 0;
		}
		else {
			xs.insert(jsi + 1, ".");
			cout << xs;
		}
	}
	system("pause");
	return 0;
}*/
