#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, count = 0;
    cin >> m;
    cin >> n;

    vector<int> A(m);
    vector<int> B(n);

    cout << "Set A" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> A[i];
    }

    cout << "Set B" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (B[i] == A[j])
            {
                count++;
            }
        }
    }

    if (count == n)
    {
        cout << "Subset";
    }
    else
    {
        cout << "Not Subset";
    }
}