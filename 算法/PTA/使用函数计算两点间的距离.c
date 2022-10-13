#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 );

int main()
{    
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));
    
    return 0;
}
double dist( double x1, double y1, double x2, double y2 )
{
	return  sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
//	double a,b,c,d;
//	a = x1 - x2;
//	b = y1 - y2;
//	c = pow(a,2);
//	d = pow(b,2);
//	distence = pow(c + d, 1.0 / 2);
//	return distence;
}

