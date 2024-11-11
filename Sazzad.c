#include <stdio.h>
int main()
{
    double wavelength, slit_separation, angle;
    printf("Enter wavelength (in nm)= ");
    scanf("%lf", &wavelength);
    if (wavelength < 380 || wavelength > 750)
        {
        printf("Out of the range. Please enter a valid number.\n");
        return 1;
        }
    printf("Enter slit separation (in um)= ");
    scanf("%lf", &slit_separation);
    printf("Enter angle (in degrees)= ");
    scanf("%lf", &angle);
    int m = (int)((slit_separation * 1000 * angle * 3.14159 / 180 / wavelength) + 0.5);
    printf("%d-th order maxima\n", m);
    return 0;
}
