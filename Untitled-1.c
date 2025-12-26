#include <stdio.h>
struct Point
{
    int x;
    int y;
};
void movePoint(struct Point *p, int dx, int dy)
{
    p->x += dx;
    p->y += dy;
}
int main()
{
    struct Point p1 = {10, 20};
    printf("Before move: (%d, %d)\n", p1.x, p1.y);
    movePoint(&p1, 5, -3);
    printf("After move: (%d, %d)\n", p1.x, p1.y);
    return 0;
}