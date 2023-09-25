#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;

using namespace std;

int n, m;
bool graph[101][101];
bool visited[101];
int result = 0;

void dfs(int cur) {
  visited[cur] = true;
  result++;

  for(int i = 1; i <= n; i++) {
    if (graph[cur][i] and not visited[i]) {
      dfs(i);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int from, to;
    cin >> from >> to;

    graph[from][to] = true;
    graph[to][from] = true;
  }

  dfs(1);
  cout << result - 1 << endl;

  return 0;
}
