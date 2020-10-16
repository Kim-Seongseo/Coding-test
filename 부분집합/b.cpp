#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    long n, ans = 1;
    scanf("%ld", &n);
    for (int i = 1; i <= n/2; i++) {
        ans *= 2;
        ans %= 16769023;
    }
    if (n%2 != 0) ans *= 2;
    printf("%ld\n", ans % 16769023);
    return 0;
}