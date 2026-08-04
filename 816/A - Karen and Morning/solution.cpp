#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int h, m;
    scanf("%d:%d", &h, &m);
 
    for (int i = 0; i <= 24 * 60; i++) {
        int H = (h * 60 + m + i) / 60 % 24;
        int M = (h * 60 + m + i) % 60;
        if (H / 10 == M % 10 && H % 10 == M / 10) {
            cout << i;
            return 0;
        }
    }
}