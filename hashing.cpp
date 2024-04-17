#include <bits/stdc++.h>
using namespace std;

// number hashing.
/*
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}
*/

/*
// character hashing.
int main()
{
    string s;
    cin >> s;

    // precompute.
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char a;
        cin >> a;
        cout << hash[a] << endl;
    }
}
*/


/*
// hashing using map.
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute:
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetching:
        cout << mpp[number] << endl;
    }
    return 0;
}
*/