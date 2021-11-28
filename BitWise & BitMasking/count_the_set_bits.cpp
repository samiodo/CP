/* count the number of set bits of a given number */

/*  to do this we have to keep right shifting the number
to check the last bit. Now to check it we just need to (& 1) to the number 

for number 5
5 = 0 0 0 0 0 1 0 1
last bit is 1 so count will increment
after the right shift
0 0 0 0 0 0 1 0
last bit is 0 so count will not increment
after the right shift
0 0 0 0 0 0 0 1
last bit is 1 so count will increment
afte the right shift
0 0 0 0 0 0 0 0
last bit is 0 so count will not increment
Now that the number is zero so we will stop
counting
*/

#include <iostream>

using namespace std;

int main () {

	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int a; cin >> a;

	int count = 0;
	while (a) {
		count += (a & 1);
		a = a >> 1;
	}
	cout << count << endl;

}