#include <math.h>
#include <stdio.h>
int main()
{
  double a, b, c, d, first_root, second_root, real, imaginary;
  printf("Enter values for a, b and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  d = b * b - 4 * a * c;

  if (d > 0)
  {
    first_root = (-b + sqrt(d)) / (2 * a);
    second_root = (-b - sqrt(d)) / (2 * a);
    printf("first_root = %.2lf and second_root = %.2lf", first_root, second_root);
  }

  else if (d == 0)
  {
    first_root = second_root = -b / (2 * a);
    printf("first_root = second_root = %.2lf;", first_root);
  }

  else
  {
    real = -b / (2 * a);
    imaginary = sqrt(-d) / (2 * a);
    printf("first_root = %.2lf+%.2lfi and second_root = %.2f-%.2fi", real, imaginary, real, imaginary);
  }

  return 0;
}
