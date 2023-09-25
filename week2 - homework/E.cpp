#include <bits/stdc++.h>
#define INF 987654321
using namespace std;
typedef long long ll;


int dy[] = {0, 1, 0, -1}, dx[] = {-1, 0, 1, 0};
int m, n, k;
vector<vector<bool>> arr, visited;

bool isInside(int y, int x) {
  return 0 <= y and y < n and 0 <= x and x < m;
}

void dfs(int y, int x) {
  visited[y][x] = true;

  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];

    if (isInside(ny, nx) and not visited[ny][nx] and arr[ny][nx]) {
      dfs(ny, nx);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int T;

  cin >> T;

  while (T--) {
    cin >> m >> n >> k;

    arr = vector<vector<bool>>(n, vector<bool>(m, false));
    visited = vector<vector<bool>>(n, vector<bool>(m, false));

    for (int i = 0; i < k; i++) {
      int x, y;
      cin >> x >> y;
      arr[y][x] = true;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (not visited[i][j] and arr[i][j]) {
          count++;
          dfs(i, j);
        }
      }
    }

    cout << count << endl;
  }

  return 0;
}