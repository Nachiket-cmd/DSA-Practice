#include<bits/stdc++.h>
using namespace std;

void printName(string name, int n) {
    if (n == 0) return;
    cout << name << endl;
    printName(name, n - 1);
}

int main() {
    string name = "Nachiket";
    printName(name, 5);
    return 0;
}
