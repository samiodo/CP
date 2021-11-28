/* given two number a and b print how many bits
do we have to transform a into b */

/* given a = 11, b = 15
	
to do this we have to XOR between these two number
the only the number that has to change will be set(1)
others will not be set (0)	
		  _
		  |
	a = 1 0 1 1
	b = 1 1 1 1
a ^ b = 0 1 0 0

now we have to just count the set (1) bits

to do this we just need the right shift till the number
is zero and check the last bit using  (& 1)
*/


#include <iostream>

using namespace std;

int main () {

	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int a, b;
	cin >> a >> b;

	int z = a ^ b;
	int answer = 0;

	while(z) {
		answer += (z & 1);
		z = (z >> 1);
	}
	cout << answer << endl;

}