#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int a;
    cin >> a;

    vector<int> v;
    int num;

    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    int aa = BinarySearch(v, a);

    cout << aa << endl;

    return 0;
}
