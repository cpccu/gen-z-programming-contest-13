#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    int x = v[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= x && v[i] > 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}