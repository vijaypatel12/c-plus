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




3

    #include <iostream>
using namespace std;

 int max_of_four(int a, int b, int c, int d) {
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;

    return max;
}

int main() {
    int a, b, c, d;

    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

     cout << max_of_four(a, b, c, d) << endl;

    return 0;
}



4


#include <iostream>
#include <string>
using namespace std;

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(n_temp);

    // Write your code here
    if (n == 1) {
        cout << "one" << endl;
    }
    else if (n == 2) {
        cout << "two" << endl;
    }
    else if (n == 3) {
        cout << "three" << endl;
    }
    else if (n == 4) {
        cout << "four" << endl;
    }
    else if (n == 5) {
        cout << "five" << endl;
    }
    else if (n == 6) {
        cout << "six" << endl;
    }
    else if (n == 7) {
        cout << "seven" << endl;
    }
    else if (n == 8) {
        cout << "eight" << endl;
    }
    else if (n == 9) {
        cout << "nine" << endl;
    }
    else {
        cout << "Greater than 9" << endl;
    }

    return 0;
}



5

    #include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // input two integers

    for (int i = a; i <= b; i++) {
        if (i == 1)
            cout << "one" << endl;
        else if (i == 2)
            cout << "two" << endl;
        else if (i == 3)
            cout << "three" << endl;
        else if (i == 4)
            cout << "four" << endl;
        else if (i == 5)
            cout << "five" << endl;
        else if (i == 6)
            cout << "six" << endl;
        else if (i == 7)
            cout << "seven" << endl;
        else if (i == 8)
            cout << "eight" << endl;
        else if (i == 9)
            cout << "nine" << endl;
        else {
            if (i % 2 == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
    }

    return 0;
}




