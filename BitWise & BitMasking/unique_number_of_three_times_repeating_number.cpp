#include <iostream>

using namespace std;

int bit_cnt[32];

void set_cnt (int n) {
	int i = 0;
	while (n) {
		bit_cnt[i] += (n & 1);
		i++;
		n = n >> 1;
	}
}

int main () {
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
	int a; cin >> a;
		set_cnt (a);
	}

	int number = 0;
	for (int i = 0; i < 32; i++) {
		int t = bit_cnt[i];
		t %= 3;
		number = number + (1 << i) * t;
	}

	cout << number << endl;
}