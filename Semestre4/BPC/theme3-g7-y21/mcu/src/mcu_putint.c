#include <stdio.h>

int put_digit(int n) {
    if (n < 0 || n > 9) {
        return -1;
    }
    putchar('0' + n);
    return 0;
}

int put_hdigit(int n) {
    if ( n < 0 || n > 15) {
        return -1;
    }
    if (n >= 0 && n <= 9) {
        return put_digit(n);
    }
    return putchar('0' + (n+7));
}

int putdec(int n)
{
    int i = 1000000000;
    if (n==0) return put_digit(0);
    if (n < 0) {
        putchar('-');
    }
    while ((n / i) == 0) i /= 10;
    while (i != 0) {
        int res = n /i;
        if (res < 0) res = -res;
        if (put_digit(res) == -1) return -1;
        n = n % i;
        i /= 10;
    }
    return 0;
}
