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
  double d = 0.85, eps = 1e-8;
  vector<double> pr(n, 1.0/n), new_pr(n);
  bool converged = false;
  while (!converged) {
      fill(new_pr.begin(), new_pr.end(), (1-d)/n);
      for (int j = 0; j < n; j++) {
          if (adj[j].empty())
              for (int i = 0; i < n; i++) new_pr[i] += d * pr[j] / n;
          else
              for (int dest : adj[j]) new_pr[dest] += d * pr[j] / adj[j].size();
      }
      converged = true;
      for (int i = 0; i < n; i++)
          if (fabs(new_pr[i] - pr[i]) > eps) converged = false;
      pr = new_pr;
  }
  for (double x : pr) cout << x << " ";
return 0;
}
