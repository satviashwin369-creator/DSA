#include <iostream>
using namespace std;

int sum(int n) {

    if (n == 0) return 0;
    return n + sum (n-1);  //  functional way

}

int main() {

    int n;
    cout << "Enter no : ";
    cin >> n;
    cout << "Sum of first n nos is : " << sum(n);

}