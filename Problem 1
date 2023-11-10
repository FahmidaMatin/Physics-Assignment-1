#include<stdio.h>
#include<math.h>

int main()
{
    double lambda;
    int m;

    printf("Enter the value of wavelength : ");
    scanf("%lf", &lambda);

    if(lambda < 380 || lambda > 750){

        /// This while loop will take input until we get a valid wavelength.
        while(lambda < 380 || lambda > 750){

            printf("Out of the range.Please enter a valid number.\n");
            scanf("%lf", &lambda);

        }

    }

    printf("Enter the value of m : ");
    scanf("%d", &m);

    double a1, a2, a3;
    printf("Enter the values of a1, a2, a3 : ");
    scanf("%lf %lf %lf", &a1, &a2, &a3);

    ///Converting the values to SI Unit.
    lambda /= 1e9;
    a1 /= 1e6;
    a2 /= 1e6;
    a3 /= 1e6;

    double ans1, ans2, ans3;
    ans1 = (m * lambda) / a1;
    ans2 = (m * lambda) / a2;
    ans3 = (m * lambda) / a3;

    double theta_1, theta_2, theta_3;
    theta_1 = asin(ans1);
    theta_2 = asin(ans2);
    theta_3 = asin(ans3);

    if(theta_1 >= theta_2 && theta_1 >= theta_3){
        printf("The value of a = %lf will bend the light most.\n", a1);
    }
    else if(theta_2 >= theta_1 && theta_2 >= theta_3){
        printf("The value of a = %lf will bend the light most.\n", a2);
    }
    else if(theta_3 >= theta_1 && theta_3 >= theta_2){
        printf("The value of a = %lf will bend the light most.\n", a3);
    }

}
