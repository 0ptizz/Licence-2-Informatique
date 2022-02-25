#include <stdio.h>

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


int put_test_line(int n)
{
    putchar('t');
    putchar('e');
    putchar('s');
    putchar('t');
    putchar(' ');
    putchar('#');
    putdec(n);
    putchar(':');

    return 0;
}

int newline()
{
    putchar('\n');

    return 0;
}



int main()
{
    int i=-2147483648;
    put_test_line(1); putdec(214); newline();
    put_test_line(2); putdec(-74); newline();
    put_test_line(3); putdec(1); newline();
    put_test_line(4); putdec(-1); newline();
    put_test_line(5); putdec(0); newline();
    put_test_line(6); putdec(2147483647); newline();
    put_test_line(7); putdec(-2147483648); newline();
    put_test_line(8); putdec(-(-2147483648)); newline();
    put_test_line(9); puthex(0); newline();
    put_test_line(10); puthex(10); newline();
    put_test_line(11); puthex(16); newline();
    put_test_line(12); puthex(2147483647); newline();
    put_test_line(13); puthex(-2147483648); newline();
    put_test_line(14); puthex(0xCAFEBABE); newline();
    put_test_line(15); puthex(-1); newline();
    put_test_line(16); putbin(0); newline();
    put_test_line(17); putbin(1); newline();
    put_test_line(18); putbin(-1); newline();
    put_test_line(19); putbin(2147483647); newline();
    put_test_line(20); putbin(-2147483648); newline();
    return 0;

}
