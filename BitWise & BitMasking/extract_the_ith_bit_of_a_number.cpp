/* given a number print the ith bit of the number */

/* to get the ith bit we have to make a mask by
left shifting 1 by i times and calculate number & (one, that is left shifted ith
times)

for number 13, print the 2nd bit
and to get the 2nd bit we should left shift 1, 2 times

		index	 3 2 1 0
			13 = 1 1 0 1	
		1 << 2 = 0 1 0 0
13 & (1 << 2)  = 0 1 0 0

*/

#include <iostream>

using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int n, i; cin >> n >> i;

	int a = n & (1 << i);
	a ? cout << "ith bit is 1" : cout << "ith bit is 0";
}