#include<iostream>
using namespace std;

// Template function to find maximum of two values
template<typename T>
T mymax(T x, T y) {
    return (x > y) ? x : y;
}

// Template function to swap two values
template<typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Demonstrate mymax
    cout << "Max of 3 and 7: " << mymax<int>(3, 7) << endl;
    cout << "Max of 3.0 and 7.0: " << mymax<double>(3.0, 7.0) << endl;
    cout << "Max of 'g' and 'e': " << mymax<char>('g', 'e') << endl;

    // Demonstrate swap
    int a = 10, b = 20;
    cout << "\nBefore swap : a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swap : a = " << a << ", b = " << b << endl;

    double c = 15.0, d = 20.0;
    cout << "\nBefore swap : c = " << c << ", d = " << d << endl;
    swapValues(c, d);
    cout << "After swap : c = " << c << ", d = " << d << endl;

    char e = 'A', f = 'B';
    cout << "\nBefore swap : e = " << e << ", f = " << f << endl;
    swapValues(e, f);
    cout << "After swap : e = " << e << ", f = " << f << endl;

    return 0;
}
