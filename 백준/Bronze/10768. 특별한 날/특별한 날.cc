#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a == 2 && b == 18)
        cout << "Special";
    else if ((a >= 2 && b > 18) || a > 2)
        cout << "After";
    else {
        cout << "Before";
    }
    return 0;
}