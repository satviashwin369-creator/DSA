#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum (vector <int> &a, int target) {  //  brute force
    for (int i = 0; i < a.size(); i++) {
        for (int j = i+1; j < a.size(); j++) {
            if (a[i] + a[j] == target) {
                return {i, j};
            }
        }
    }
    return vector <int> {};
}

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    cout << "Enter elements of array: ";
    vector <int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector <int> result = twoSum(a, target);
    for (auto it : result) {
        cout << it << " ";
    }

}