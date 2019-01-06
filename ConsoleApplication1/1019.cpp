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
	string N,x,y;
	int Nn,out;
	getline(cin, N);
	N.insert(0, 4 - N.length(), '0');
	if (N[0] == N[1]&& N[0] == N[2] && N[0] == N[3]) {
		cout << N << " - " << N << " = 0000";
	}
	else {
		do {
			Nn = stoi(N);
			sort(N.begin(), N.end());
			x = N;
			reverse(N.begin(), N.end());
			y = N;
			out = stoi(y) - stoi(x);
			cout << y << " - " << x << " = ";
			N = to_string(out);
			N.insert(0, 4 - N.length(), '0');
			cout << N << endl;
		} while (out != 6174);
	}
	system("pause");
	return 0;
}
*/