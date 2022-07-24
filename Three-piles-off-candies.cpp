#include <iostream>

using namespace std;
int main()
{

    long long int x, y, z;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        long long int ans = (x + y + z) / 2;
        cout << ans << endl;
    }
    return 0;
}