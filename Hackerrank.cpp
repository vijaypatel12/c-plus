#include <iostream>
using namespace std;

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = *a - *b;

    *a = sum;
    *b = (diff >= 0) ? diff : -diff;  // absolute difference
}

int main() {
    int a, b;
    cin >> a >> b;

    update(&a, &b);  // passing addresses

    cout << a << endl;
    cout << b << endl;

    return 0;
}
