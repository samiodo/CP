/* given an array or a string print all the subsequence */

/*	we can genere just by using binary number system
for ar [3] = {1, 2, 3}

n = 3, so the number of subsequence is 2^n = 2^3 = 8

for each binary number from 0 to 2^n - 1, we will take the digit if
the bit is set if it is not than we will not take it

		1 2 3
	0 = 0 0 0 -> { }
	1 = 0 0 1 -> {3}
	2 = 0 1 0 -> {2}
	3 = 0 1 1 -> {2 3}
	4 = 1 0 0 -> {1}
	5 = 1 0 1 -> {1 3}
	6 = 1 1 0 -> {1 2}
	7 = 1 1 1 -> {1 2 3}

 */

#include <iostream>

using namespace std;

void generate (int *a, int n) {
	for (int i = 0; i < (1 << n); i++) {
		int t = i, j = 0;
		cout << "{ ";
		while (t) {
			if (t & 1) cout << a[j] << " ";
			j++;
			t = t >> 1;
		}
		cout << "}"<< endl; 
	}
}

int main () {
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	generate (a, n);
}