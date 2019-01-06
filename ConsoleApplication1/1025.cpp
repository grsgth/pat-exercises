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
struct node {
	int data;
	int next=-1;
}List[100000];
struct nod {
	int address;
	int data;
}nod1;
int main()
{
	int start, N, K;
	string y;
	int add, data, next;
	node temp;
	vector<nod> list;
	cin >> start >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> add >> data >> next;
		List[add].data = data;
		List[add].next = next;
	}
	int begin = start;
	for (int i = 0; i < N; i++) {
		nod1.address = begin;
		nod1.data = List[begin].data;
		list.push_back(nod1);
		begin = List[begin].next;
		if (begin == -1)
			break;
	}
	if (K != 1) {
		for (int i = 0; i <= list.size() - K; i = i + K) {
			reverse(list.begin() + i, list.begin() + i + K);
		}
	}
	for (auto i = list.begin(); i < list.end(); i++) {
		y = to_string((*i).address);
		y.insert(0, 5 - y.length(), '0');
		cout << y << " " << (*i).data<<" ";
		if (i < list.end() - 1) {
			y = to_string((*(i + 1)).address);
			y.insert(0, 5 - y.length(), '0');
			cout << y << endl;
		}
		if (i == list.end() - 1)
			cout << -1 << endl;
	}
	system("pause");
	return 0;
}
