#include <iostream>
#include <cmath>
using namespace std;

double S0(const int n)
{
    double s = 0;
    for (int i = 3; i <= n; i++) {
        s += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
    }
    return s;
}

double S1(const int n, const int i)
{
    if (i > n)
        return 0;
    else
        return (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i)) + S1(n, i + 1);
}

double S2(const int n, const int i)
{
    if (i < 3)
        return 0;
    else
        return (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i)) + S2(n, i - 1);
}

double S3(const int n, const int i, double t)
{
    t += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
    if (i >= n)
        return t;
    else
        return S3(n, i + 1, t);
}

double S4(const int n, const int i, double t)
{
    t += (cos(i / 2.0) + pow(sin(i), 2)) / (1 + sin(i) * cos(i));
    if (i <= 3)
        return t;
    else
        return S4(n, i - 1, t);
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;
    cout << "(iter)           S0 = " << S0(n) << endl;
    cout << "(rec up ++)      S1 = " << S1(n, 3) << endl;
    cout << "(rec up --)      S2 = " << S2(n, n) << endl;
    cout << "(rec down ++)    S3 = " << S3(n, 3, 0) << endl;
    cout << "(rec down --)    S4 = " << S4(n, n, 0) << endl;

    return 0;
}