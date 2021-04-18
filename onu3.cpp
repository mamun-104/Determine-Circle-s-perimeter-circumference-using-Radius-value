#include<stdio.h>
#include<math.h>

/// Determine Circle's perimeter/circumference using Radius value
/// Formula: Perimeter = 2*3.1416*radius

int main()
{
    double radius, perimeter;
    scanf("%lf",&radius);

    perimeter = 2*3.1416*radius;

    printf("Perimeter = %.5lf\n",perimeter);

    return 0;
}


