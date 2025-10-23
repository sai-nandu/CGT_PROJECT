#include<bits/stdc++.h>
using namespace std;
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> adj(n);
  for (int i = 0; i < m; i++) {
      int u, v; cin >> u >> v;
      adj[u].push_back(v);
  }
  double damping = 0.85;
  int steps = 1000000;
  vector<int> visits(n, 0);
  int current = rand() % n;
  for (int i = 0; i < steps; i++) {
      double r = (double)rand() / RAND_MAX;
      if (r < damping && !adj[current].empty())
          current = adj[current][rand() % adj[current].size()];
      else
          current = rand() % n;
      visits[current]++;
  }
  for (int i = 0; i < n; i++)
      cout << (double)visits[i]/steps << " ";
return 0;
}
