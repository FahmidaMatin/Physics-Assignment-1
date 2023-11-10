#include <stdio.h>
#include <math.h>

int main()
{
    int m1, m2;
    m1 = 3, m2 = 2;

    double d, theta_1, theta_2, lamda_1, lamda_2;
    lamda_1 = 530;
    lamda_2 = 700;
    lamda_1 /= 1e6;      /// Converting to SI Unit.
    lamda_2 /= 1e6;      /// Converting to SI Unit.
    theta_1 = 65.0;

    d = ((m1 * lamda_1) / sin(theta_1 * M_PI / 180));

    double ans = ((m2 * lamda_2) / d);

    theta_2 = asin(ans);

    double angle = (theta_2 * 180 / M_PI);

    printf("The angle for the second-order bright spot for red light is %.2f degrees\n", angle);

    return 0;
}
