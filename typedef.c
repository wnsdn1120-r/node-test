#include <stdio.h>

struct point {
    int x;
    int y;
};
typedef struct point POINT;

int main(void)
{
    POINT p1 = {10,20};
    POINT p2 = {30,40};

    p2 = p1;
    if((p1.x == p2.x) == (p1.y == p2.y))
    printf("같습니다\n");

    printf("%d\n",p2.x);
    printf("%d\n",p2.y);
    return 0;
}
