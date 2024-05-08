// //missing number.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,sum=0,sum1=0;
//     cin >> n;
//     int arr[n-1];
//       sum = (n*(n+1))/2;
//     for(int i=0;i<n-1;i++)
//     {
//         cin >> arr[i];
//         sum1+=arr[i];
//     }
//     cout << sum-sum1 <<endl;

// }

// // maximum consecutive elemenets in an array. -- can be done by counting each and every one
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,c=0,max=0;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin >> arr[i];
//         if(arr[i]==1)
//         {
//             c++;
//              max = c;
            
//         }
        
//         else
//         {
           
//             c= 0;
//         }
//     }
//     cout << max ;
    
// }


// // finding the number that appears once.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<int,int>mpp;
//     vector<int> v;
//     int num,n;
//     cin >> n;
//     for(int i=0;i<n;i++)
//     {
//         cin >>num;
//         v.push_back(num);
//         mpp[v[i]]++;
//     }
//     for(auto it:mpp)
//     {
//         if(it.second == 1)
//         {
//             cout << it.first << " ";
//         }
//     }

// }

