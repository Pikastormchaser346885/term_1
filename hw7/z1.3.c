#include <stdio.h>
#include <math.h>

struct point

{
    double x, y;
};

typedef struct point Point;

double distance(Point p1, Point p2)
{
    double dx = p2.x - p1.x;
    
    double dy = p2.y - p1.y;
    
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1 = {1.0, 2.0};
    
    Point p2 = {4.0, 6.0};
    
    double dist = distance(p1, p2);
    
    printf("Distance: %.2lf\n", dist);
    
    return 0;
}

