/* given a number check if it is odd or even */

/* basically we are just checking the last
bit. If the last bit is 1 then it is odd
and if the last bit is 0 the it is even

and to check it we just need to "&1" to the number

	5 = 101
	     &1
	      1 -> that means last bit is 1

	4 = 100
		 &1
		  0 -> that means last bit is 0
*/

#include <iostream>

using namespace std;

int main () {

	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int a; cin >> a;

	(a & 1) ? cout << "odd" : cout << "even";


}