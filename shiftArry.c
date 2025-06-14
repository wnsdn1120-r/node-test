#include <stdio.h>

void shiftArr(int a[]);

int main(void) {
    int a[3] = {0, 10, 20};
    shiftArr(a);

    return 0;
}

void shiftArr(int a[]) {
    int temp;

    temp = a[0];
    a[0] = a[2];
    a[2] = a[1];
    a[1] = temp;

    printf("a[0] = %d\n", a[0]);
    printf("a[1] = %d\n", a[1]);
    printf("a[2] = %d\n", a[2]);
    
}
