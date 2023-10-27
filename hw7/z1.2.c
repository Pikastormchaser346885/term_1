#include <stdio.h>

struct point
{
    double x, y;
};

typedef struct point Point;

struct triangle
{
    Point a, b, c;
};

typedef struct triangle Triangle;

void print_point(Point p)
{
    printf("(%.2lf, %.2lf)", p.x, p.y);
}

void print_triangle(Triangle t)
{
    printf("{");
    
    print_point(t.a);
    printf(", ");
    
    print_point(t.b);
    
    printf(", ");
    
    print_point(t.c);
    
    printf("}");
}

int main()

{
    
    Triangle t = {{1.00, 0.00}, {0.50, 2.00}, {0.00, 1.50}};
    
    print_triangle(t);
    
    return 0;
}



