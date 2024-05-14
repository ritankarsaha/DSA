#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
#include<utility>
#include<stack>
#include<list>
#include<map>
using namespace std;
#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define ll                  long long
#define ull                 unsigned long long
#define pb                  push_back
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define PI                  3.141592653589793238
#define MIN                 INT_MIN
#define MAX                 INT_MAX
#define INF                 LONG_LONG_MAX
#define MOD                 1000000007
#define LLM                 1000000000000000007


ll factorial(ll n)              
{ 
    if(n==0) return 1; 
    ll res = 1; 
    for (ll i = 2; i <= n; i++) 
    res = res * i; 
    return res; 
}
ll nPr(ll n, ll r)              
{ 
    return factorial(n) / factorial(n - r); 
}
ll nCr(ll n, ll r)              
{ 
    return factorial(n) / (factorial(r) * factorial(n - r));
}
ll gcd(ll a, ll b)              
{ 
    if (b == 0) 
    return a; 
    return gcd(b, a % b); 
}
ll lcm(ll a, ll b)              
{
     return (a * b) / gcd(a, b);
}
ull pow(ull a, ull b)         
{ 
    ull ans = 1; 
    a%=MOD; 
    while(b)
    { 
        if (b&1) ans = (ans*a) % MOD; 
        a = (a*a) % MOD; 
        b >>= 1; 
    } 
        return ans; 
}
ull countsetbits(ull n)
{
    ull count = 0;
    while(n)
    {
      count += n&1;
      n>>=1;
    }
    
 return count;
}
ull totalsetbit(ull n)
{
    ull total = 0;
    for(int i=1;i<=n;i++)
    {
        total = total + countsetbits(i);
    }
    return total;
}
bool isPrime(ll n)              
{ 
    if(n <= 1) return false; 
    for(ll i = 2; i*i <= n; i++) 
    if(n % i == 0) return false; 
    return true; 
}
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

//0s at positions corresponding to non-prime numbers and 1s at positions corresponding to prime numbers up to the specified limit.
#define $ 1000000
vector<int> prime(1000000,1);
void blackbox()
{
    prime[0] = prime[1] =0;
    for (ll i = 2; i*i < $ ; i++)
    {
        if(prime[i] == 1){
            for(ll j = 2*i ; j<$ ;j += i){
            prime[j] = 0;
            }
        }
    }

}
void printBinary(int num)
{
   for(int i=10;i>=0;--i)
   {
    cout << ((num >> i) & 1);
   }
   cout <<endl;
}
bool isEven(int num) 
{
    return (num & 1) == 0;
}
map<char, int> count_characters_frequency(const string& input_string) {
    map<char, int> char_frequency;

    for (char ch : input_string) {
        char_frequency[ch]++;
    }

    return char_frequency;
}
map<int, int> count_numbers_frequency(int input_number) 
{
    map<int, int> number_frequency;   
    string number_str = to_string(input_number);
    for (char digit : number_str)
    {
        number_frequency[digit - '0']++;
    }

    return number_frequency;
}


int main()
{
    int x= 0;
    vector<int> v;
    int num;
    for(int i=0;i<3;i++)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    
    int f1 = abs(v[0] - v[1]);
    int f2 = abs(v[1] -v[2]);
    x = f1+f2;
    cout << x << endl;
 
}