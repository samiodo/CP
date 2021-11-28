/* problem link : https://www.hackerrank.com/challenges/maximizing-xor/problem */
#include <iostream>

using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int a, b;
	cin >> a >> b;


	int answer = a ^ a;
	for (int i = a; i <= b; i++) {
		for (int j = i; j <= b; j++) {
			int d = i ^ j;
			if (d > answer) answer = d;
		}
	}

	cout << answer << endl;
}