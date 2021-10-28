#include <iostream>

using namespace std;

int leap_year (int n) {
    if (n % 400 == 0) return 1;
    if (n % 100 == 0) return 0;
    if (n % 4 == 0) return 1;
    return 0;
}

isleap(int n)
{
    return n % 4 == 0 && (n % 100 != 0 || n % 400 == 0);
}

int main () {
    int n;
    cin >> n;

    leap_year(n) ? cout << "YES" : cout << "NO";
}
