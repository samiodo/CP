#include <iostream>
#include <string>

using namespace std;

int mod (string s, int n) {
    int rem = 0;
    for (int i = 0; i < s.size(); i++) {
        rem = ( rem * 10 + s[i] - '0' ) % n;
    }
    return rem;
}
int main () {
    string s; cin >> s;
    int n; cin >> n;

    cout << mod (s, n) << endl;

}
