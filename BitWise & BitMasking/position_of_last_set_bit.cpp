/* given a number print the position of the last set bits */

/* 
	to extract the last set bit of a number we need to make a mask using
	(number - 1).
	now to make the mask we use bitwise complement (~) before (number - 1) and to
	extract we should calculate number & ~(number - 1) 

	for number 
*/
#include <iostream>

using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	#endif


}