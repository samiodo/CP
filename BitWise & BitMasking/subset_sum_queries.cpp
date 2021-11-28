/* given an array for every query print yes if the subset sum exitst or no
if it doesn't*/

/*
	for array {5, 3, 8}

	now we will take a bit set. if index i is set that means subset sum i exist.
	we know that subset sum 0 always exit, so we will set that first.
	so,

	bitset <17> bit;
	*00000000000000000*

	bit[0] = 1;
	*00000000000000001*

	now for number 5, we will left shift the bit array by 5 
	bit << 5
	*0000000000100000*
	now we have to add the previous sum too by doing an or operation with
	previous bit array

	bit = bit | bit << 5
	*0000000000100001*

	then for again for number 3 we will left shift the bit array by 3
	bit << 3
	*0000000100001000*
	then adding the previos sum we get,
	bit = bit | bit << 3
	*0000000100101001*

	now from the bit array we can see that index 0,3,5 and 8 is turned set. That means
	these number can be the subset sum of {5, 3}
	now we will do the same for the rest of the array
*/
#include <iostream>
#include <bitset>
using namespace std;

int main () {

	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int n; cin >> n;
	int ar[n];
	int s = 0;	
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		s += ar[i];
	}

	bitset <20> bit;
	bit[0] = 1;

	for (int i = 0; i < n; i++) {
		bit = bit | (bit << ar[i]);
	}

	int q; cin >> q; 
	while (q--) {
		int query;
		cin >> query;
		(query > s || !bit[query]) ? cout << "no\n" : cout << "yes\n";
	}
}