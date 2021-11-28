/* problem link : https://www.hackerrank.com/contests/daiict-ipc-3/challenges/playing-with-bits */

#include <iostream>

using namespace std;

int countSetBits (int n) {

	int count = 0;
	while (n) {
		count += (n & 1);
		n = n >> 1;
	}
	return count;
}

int main () {

	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int t; cin >> t;

	while (t--) {
		int l, r;
		cin >> l >> r;

		int answer = 0;
		for (int i = l; i <= r; i++) {
			answer += countSetBits(i);
		}

		cout << answer << endl;
	}


}