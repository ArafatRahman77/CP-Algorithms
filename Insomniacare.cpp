#include <iostream>
int main()
{
    int k, l, m, n, d, i, n_count = 0;
    std::cin >> k;
    std::cin >> l;
    std::cin >> m;
    std::cin >> n;
    std::cin >> d;
    for (i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            n_count++;
        }
    }
    std::cout << n_count;
}