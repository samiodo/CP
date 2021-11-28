/* swap or XOR swap to given numbers */

/* to swap two numbers we have to know how
XOR works, we know that if we XOR between same numbers they will
cancel out each other meaning that same bit turns into zero

a = 5
b = 7

a = a ^ b = 5 ^ 7
b = b ^ a = 7 ^ (5 ^ 7) 5 (two 7 canceled each other so 5 is left)
a = a ^ b = (5 ^ 7) ^ 5 = 7 (now two 5 canceled each other so 7 is left)

so the value is also swapped
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

	a = a ^ b;
	b = b ^ a;
	a = a ^ b;

	cout << a << " " << b << endl;
}