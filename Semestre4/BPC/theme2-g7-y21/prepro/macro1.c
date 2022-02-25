#include <stdio.h>
#define T (65)
extern int putchar(int c);


int put_digit(int d) {
    if (d < 0 || d > 9) {
        return -1;
    }
    putchar('0' + d);
    return 0;
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

int main() 
{
    // int u=68;
    // putchar(u);               /* premier char */
    // putchar(T);                 /* deuxième char */

	printf("la ligne :%d\nla compilation donne : ",__LINE__);
	putdec(456.666);
	printf("\nla ligne :%d\n",__LINE__);



}
