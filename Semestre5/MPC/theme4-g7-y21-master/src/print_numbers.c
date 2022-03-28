#include <stdio.h>

extern int putchar(int c);

int put_digit(int d) {
    if (d < 0 || d > 9) {
        return -1;
    }
    putchar('0' + d);
    return 0;
}

int put_hdigit(int h) {
    if ( h < 0 || h > 15) {
        return -1;
    }
    if (h >= 0 && h <= 9) {
        return put_digit(h);
    }
    return putchar('0' + (h+7));
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

int putbin(int b)
{
    int mask = 1073741824;
    if (b==0) return put_digit(0);
    if (b < 0) {
        b = b + 2147483648;
        put_digit(1);
        while (mask > 0) {
            if ((b & mask) > 0) {
                put_digit(1);
            }
            else {
                put_digit(0);
            }
            mask = mask >> 1;
        }
    }
    if (b > 0) {
        while (mask > b) {
        mask = mask >> 1;
        }
        while (mask > 0) {
            if ((b & mask) > 0) {
                put_digit(1);
            }
            else {
                put_digit(0);
            }
            mask = mask >> 1;
        }
    }
    return 0;
}

int puthex(int x){
    int bit = 28;

    if (x==0) return put_digit(0);
    while ((x >> bit) == 0) bit -= 4;
    for (; bit >= 0; bit = bit-4)
        put_hdigit((x >> bit) & 15);
    return 0;
}