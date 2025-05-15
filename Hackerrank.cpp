1  //pointer addition subtraction

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



2  //Reverse array


    #include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
     for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}

