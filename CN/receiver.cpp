#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string a, b;
    cout << "Enter stuffed frame length: ";
    cin >> n;
    cout << "Enter the stuffed frame bits: ";
    cin >> a;
    int count = 0;
    for (int i = 0; i < n; i++) {
        b += a[i];

        if (a[i] == '1') {
            count++;
        } else {
            count = 0;
        }
        if (count == 5) {
            i++;
            count = 0;
        }
    }
    cout<<"Frame after bit de-stuffing: "<<b<<endl;

    return 0;
}