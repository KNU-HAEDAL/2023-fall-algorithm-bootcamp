#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;

using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
// {0, -1}, {1, 0}, {0, 1}, {-1, 0}

string board[100];
bool visited[100][100];
int n, m;

bool isInside(int y, int x) {
  return 0 <= y && y < n && 0 <= x && x < m;
}

int bfs() {
  int endY = n - 1, endX = m - 1;
  queue<pair<pair<int, int>, int>> q;

  // pair
  q.push({{0, 0}, 1});
  while(!q.empty()) {
    int curY = q.front().first.first;
    int curX = q.front().first.second;
    int distance = q.front().second;
    q.pop();

    if (curY == endY && curX == endX) {
      return distance;
    }

    for (int i = 0 ; i < 4; i++) {
      int ny = curY + dy[i];
      int nx = curX + dx[i];

      if (isInside(ny, nx) && !visited[ny][nx] && board[ny][nx] == '1') {
        visited[ny][nx] = true;
        q.push({{ny, nx}, distance + 1});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n >> m;
  for(int i = 0; i < n; i++) {
    cin >> board[i];
  }

  cout << bfs() << endl;

  return 0;
}
