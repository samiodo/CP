#include <iostream>
#include <bitset>
#include <string>
#include <sstream>

using namespace std;

int main () {

	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif

	//simple assignment
	/*bitset <4> a;
	a[0] = 1;
	a[1] = 0;
	a[3] = 1;
	cout << a << endl;*/

	// Integer to bitset and vice-versa
	/*bitset <4> a_int(10);
	cout << a_int << endl;
	int n = (int) a_int.to_ulong();
	cout << n << endl;*/

	// String to bitset and vice-versa
	/*string str = "1010101011";
	bitset <10> b(str);
	cout << b[0] << endl;
	string new_str = b.to_string();
	cout << new_str << endl;*/

	// Count the nubmer of 1's
	/*bitset <5> c;
	c[0] = 1;
	c[1] = 1;
	c[3] = 1;
	cout << c.count() << endl;*/
	
	// Basic Operation
	/*bitset <4> p ( string("0101") );
	bitset <4> q ( string("1010") );

	cout << (p & q) << endl;
	cout << (p | q) << endl;
	cout << (p ^ q) << endl;
	cout << (~p) << endl;
	cout << (p << 1) << endl;
	cout << (q >> 1) << endl;*/

	// idk wtf is this
	/*string str1 = "1010110100";
	istringstream stream (str1);

	bitset <2> s1;
	bitset <6> s2;
	stream >> s1;
	cout << s1 << endl;
	stream >> s2;
	cout << s2 << endl;*/

	//Check if any bit is set
	/*bitset <4> a1 ( string("0100") );
	bitset <4> b1 ( string("0000") );

	cout << a1.any() << endl;
	cout << b1.any() << endl;*/	

	//Check if none of the bit is set 
	/*bitset <4> a2 ( string("0100") );
	bitset <4> b2 ( string("0000") );

	cout << a2.none() << endl;
	cout << b2.none() << endl;*/

	//Check if all bits are set
	/*bitset <4> a3 ( string("0100") );
	bitset <4> b3 ( string("1111") );

	cout << a3.all() << endl;
	cout << b3.all() << endl;*/

	//Flip all or any particular bit
	/*bitset <4> a4 ( string ("1010") );
	cout << a4.flip() << endl;
	cout << a4.flip(2) << endl;*/

	//Reset all or any particular bit
	/*bitset <4> a5 ( string ("1101") );
	cout << a5.reset(2) << endl;
	cout << a5.reset() << endl;*/

	//Set all or any particular bit
	/*bitset <4> a6 ( string ("0000") );
	cout << a6.set(2) << endl;
	cout << a6.set() << endl;*/

}