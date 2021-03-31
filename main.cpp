#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "THIS IS A SAMPLE TEXT!";
    for (char &ch : s) {
        ch = tolower(ch);
    }
    cout << s << '\n';
    return 0;
}
