/* each number appears twice except for one,
find the one which will aprear just once */

/* we need XOR operation, because in XOR same
bit cancel out each other and make a zero */

#include <iostream>

using namespace std;

int main () {

	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	int n; cin >> n;

	int a,f;
	f = 0;
	while (n--) {
		cin >> a;
		f = (f ^ a);
	}

	cout << f << endl;
		

}