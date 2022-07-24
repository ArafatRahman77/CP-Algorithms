#include <iostream>
#include <algorithm>
int main()
{
    int n, l, i, max_n = 0;
    std::cin >> n >> l;
    double x, x2, y, z;
    int a[n];
    for (i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::sort(a, a + n);
    for (i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > max_n)
        {
            max_n = a[i + 1] - a[i];
        }
    }
    x = a[0];
    x2 = l - a[n - 1];
    y = (double)max_n / 2;
    z = std::max(x, y);
    z = std::max(z, x2);
    printf("%.10lf", z);
}