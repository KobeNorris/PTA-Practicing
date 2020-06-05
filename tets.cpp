#include <iostream>
#include <cmath>
using namespace std;

int fun (int x) {
    int sum = 0;
    sum += (x % 10) * 10;
    sum += x / 10;
    return sum;
}

void out(int x, int I) {
    if (x > I)
        cout << "Cong";
    else if (x < I)
        cout << "Gai";
    else if (x == I)
        cout << "Ping";
}

void out(double x, int I) {
    if (x > I)
        cout << "Cong";
    else if (x < I)
        cout << "Gai";
    else if (x == I)
        cout << "Ping";
}

int main() {
    int m = 0, x = 0, y = 0;
    int a = 0, b = 0;
    double c = 0;
    int max_a = 0;
    cin >> m >> x >> y;
    for (int i = 10; i < 100; i++) {
        a = i;
        b = fun(i);
        if (y * abs(a - b) == x * b) 
	{
            max_a = i;
        }
    }
    if (max_a == 0)
        cout << "No Solution" << endl;
    else {
        a = max_a;
        b = fun(a);
        c = 1.0 * b / y;
        cout << a << ' ';
        out(a, m); cout << ' ';
        out(b, m); cout << ' ';
        out(c, m); cout << endl;
    }

    return 0;
}
