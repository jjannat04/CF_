#include <stdio.h>
double rem(double a, double b);
int main()
{
        double n, m, a; 
    do 
    {
    scanf("%lf %lf %lf", &n, &m, &a);
    } while(n < 1 || m < 1 || a >= 1e9);

    double num1 = rem(n, a);
    double num2 = rem(m, a);
    printf("%.0lf", num1*num2);
}
double rem(double x, double y)
{
    double num = 0;
    while(x > 0)
    {
        num++;
        x = x - y;
    }
    return num;
}