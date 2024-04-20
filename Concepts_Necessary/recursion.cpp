/*
#include <bits/stdc++.h>
using namespace std;
*/

/*
// basic recusion printing.
void f(int i, int a)
{
    if (i <= a)
    {
        cout << "HI" << endl;
    }
    f(i + 1, a);
}
int main()
{
    int N;
    cin >> N;
    f(1, N);
}
*/

/*
// basic recursion number printing 1 to N.
void f(int i, int a)
{

    if (i > a)
    {
        return;
    }
    cout << i << endl;
    f(i + 1, a);
}
int main()
{
    int N;
    cin >> N;
    f(1, N);
}
*/

/*
// N to 1 using recursion.
void f(int i, int a)
{
    if (i < 1)
        return;
    cout << i << endl;
    f(i - 1, a);
}
int main()
{
    int n;
    cin >> n;
    f(n, n);
}
*/

/*    sum of n  numbers parameterised way.
void f(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    f(i - 1, sum + i);
}
int main()
{
    int n;
    cin >> n;
    f(n, 0);
}
*/

/*
// sum of n numbers in functional recursion.
int f(int n)
{
    if (n == 0)

        return 0;

    return n + f(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
}
*/

/*     factorial of n.
int f(int n)
{
    if (n == 1 || n == 0)

        return 1;

    return n * f(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
}
*/

/*
// reverse an array
void f(int i, int arr[], int n)
{

    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    f(i + 1, arr, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    f(0, arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
*/

/*
bool check(string str)
{
    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str;
    cin >> str;

    bool c = check(str);

    if (c)
        cout << "PALINDROME";
    else
        cout << "NOT PALINDROME";

    return 0;
}
*/

/*            // palindrome string using recursion.
bool f(int i, string str)
{
    if (str[i] != str[str.size() - i - 1])
        return false;
    return true;
    f(i + 1, str);
}
int main()
{
    string s;
    cin >> s;
    bool c = f(0, s);
    if (c == false)
        cout << "NOT PALINDROME";
    else
        cout << "PLAINDROME";
}
*/

/*
// printing fibonacci using recursion.
int f(int n)
{
    if (n <= 1)
        return n;
    return f(n - 1) + f(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
}
*/

