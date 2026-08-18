#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, root1, root2;

    printf("Enter value of a: ");
    scanf("%f", &a);

    printf("Enter value of b: ");
    scanf("%f", &b);

    printf("Enter value of c: ");
    scanf("%f", &c);

    D = b*b - 4*a*c;

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);

        printf("Root 1 is: %.2f\n", root1);
        printf("Root 2 is: %.2f\n", root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2*a);
        printf("Both roots are: %.2f\n", root1);
    }
    else
    {
        printf("Roots are imaginary\n");
    }

    return 0;
}