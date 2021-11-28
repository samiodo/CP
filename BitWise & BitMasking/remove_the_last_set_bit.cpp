/* given a number remove the last set (1) bit
of the number */

/* Now to remove the last bit we show do
	number & (number - 1)

	for number 13 (1101) we have to get 1100 after we remove the last set bit;

	 13 = 1 1 0 1
	 12 = 1 1 0 0
13 & 12 = 1 1 0 0

	for number 18 (10010) we should get 10000

	 18 = 1 0 0 1 0
	 17 = 1 0 0 0 1
18 & 17 = 1 0 0 0 0
 */

#include <iostream>

using namespace std;

int main () {

	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int a; cin >> a;
	
	a = a & (a - 1);

	cout << a << endl;
}