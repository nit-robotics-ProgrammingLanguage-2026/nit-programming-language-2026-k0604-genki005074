#include <stdio.h>

int main(void)
{
    int limit;
    long long total = 0;

    if (scanf("%d", &limit) != 1) {
        return 0;
    }
    if (limit < 0) {
        printf("NG");
        return 0;
    }

    // 1から入力された整数まで順に調べる。
    for (long long number = 1; number <= limit; ++number) {
        // 3の倍数と5の倍数を飛ばし、残りの数を足す。
        if (number % 3 == 0 || number % 5 == 0) {
            continue;
        }
        total += number;
    }

    printf("%lld", total);
    return 0;
}
