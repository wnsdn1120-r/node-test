#include <stdio.h>

void shiftVal(int a, int b, int c);

int main(void) {
    int a =0;
    int b = 10;
    int c = 20;
    shiftVal(a, b, c);

    return 0;
}

void shiftVal(int a, int b, int c) {
    int temp;

    temp = a;
    a = c;
    c = b;
    b = temp;

    printf("a= %d\n",a);
    printf("b= %d\n",b);
    printf("c= %d\n",c);
}
