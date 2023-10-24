#include <iostream>
using namespace std;

double S0(int N) {
    double s0 = 1;
    for (int k = N; k <= 19; k++) {
        s0 *= (k - N) / (double)(k + N) + 1;
    }
    return s0;
}

double S1(int K, int N) {
    if (K > 19) {
        return 1;
    }
    return ((K - N) / (double)(K + N) + 1) * S1(K + 1, N);
}

double S2(int K, int N) {
    if (K < N) {
        return 1;
    }
    return ((K - N) / (double)(K + N) + 1) * S2(K - 1, N);
}

double S3(int K, int N, double t = 1) {
    t *= ((K - N) / (double)(K + N) + 1);
    if (K >= 19) {
        return t;
    }
    return S3(K + 1, N, t);
}

double S4(int K, int N, double t = 1) {
    t *= ((K - N) / (double)(K + N) + 1);
    if (K <= N) {
        return t;
    }
    return S4(K - 1, N, t);
}

int main() {
    int N;
    cout << "N = ";
    cin >> N;
    cout << "(iter)           P0 = " << S0(N) << endl;
    cout << "(rec up ++)      P1 = " << S1(N, N) << endl;
    cout << "(rec up --)      P2 = " << S2(19, N) << endl;
    cout << "(rec down ++)    P3 = " << S3(N, N) << endl;
    cout << "(rec down --)    P4 = " << S4(19, N) << endl;

    return 0;
}
