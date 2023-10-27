#include <stdio.h>

struct point

{
    double x, y;
};

typedef struct point Point;

void print_point(Point p)

{
    printf("(%.2lf, %.2lf)", p.x, p.y);
}

int main()

{
    Point p = {1.23, 4.56};
    
    print_point(p);
    
    return 0;
}