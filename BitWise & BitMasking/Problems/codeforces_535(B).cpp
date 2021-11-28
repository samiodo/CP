/* https://codeforces.com/problemset/problem/535/B */

#include <iostream>
#include <algorithm>

using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	string s; cin >> s;

	int l = s.size ();
	
	reverse (s.begin(), s.end());
	
	int sum = (1 << l) - 2;
	
	for (int i = 0; i < l; i++) {
		if (s[i] == '7') {
			int d = 1 << i;
			sum += d;
		}
	}
	cout << sum + 1 << endl;
}