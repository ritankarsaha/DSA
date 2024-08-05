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

int main()
{



//   // method 1
//     int n,m;
//     cin >> n >> m;
//     int adj[n+1][m+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin >> u >> v;
//         adj[u][v] =1;
//         adj[v][u] = 1;
//     }

//     return 0;

// // method 2

// int n,m;
// cin >> n >> m;
// vector<int> adj[n+1];
// for(int i=0;i<m;i++){
//     int u,v;
//     cin >> u >> v;
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }

// return 0;


// now if this is a directed graph, there is an edge between u and v. So the second push_back line isn't actually required in this case. u----->v



// // case 3 - if this a directed graph.
// int n,m;
// cin >> n >> m;
// vector<int> adj[n+1];
// for(int i=0;i<m;i++){
//     int u,v;
//     cin >> u >>v;
//     adj[u].push_back(v);
//     //the second line isn't required because it is a directed graph.

// }

}