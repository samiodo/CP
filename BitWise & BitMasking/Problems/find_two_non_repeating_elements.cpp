/* problem link : https://www.geeksforgeeks.org/find-two-non-repeating-elements-in-an-array-of-repeating-elements/ */

#include <iostream>

using namespace std;

int last_set_ind (int n) {
	int index = 0;
	while (n) {
		if (n & 1) break;
		index++;
		n = n >> 1;
	}
	return index;
}

int main () {
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int n; cin >> n;

	int *ar = new int[n], result = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		result = result ^ ar[i];
	}

	int set_ind = last_set_ind (result);
	int mask = (1 << set_ind);

	int *nar = new int[n], c = 0;
	for (int i = 0; i < n; i++) {
		if (ar[i] & mask) {
			nar[c] = ar[i];
			c++; 
		}	
	}

	int a = 0, b = 0;
	for (int i = 0; i < c; i++) {
		a = a ^ nar[i];
	}
	b = result ^ a;

	cout << a << " " << b << endl;






}