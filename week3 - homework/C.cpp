#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;

using namespace std;


int n;
ll dp[21][21][21];

ll solve(int a, int b, int c) {
  if (a <= 0 || b <= 0 || c <= 0) {
    return 1;
  }
  else if (a > 20 || b > 20 || c > 20) {
    return solve(20, 20, 20);
  }

  if (dp[a][b][c] != INF) {
    return dp[a][b][c];
  }

  if (a < b && b < c) {
    return dp[a][b][c] = solve(a, b, c - 1) + solve(a, b - 1, c - 1) - solve(a, b - 1, c);
  }
  else {
    return dp[a][b][c] = solve(a - 1, b, c) + solve(a - 1, b - 1, c) +
                         solve(a - 1, b, c - 1) - solve(a - 1, b - 1, c - 1);
  }
}

int main() {
  // ios::sync_with_stdio(false);
  // cin.tie(NULL);
  // cout.tie(NULL);


  for (int i = 0; i <= 20; i++) {
    for (int j = 0; j <= 20; j++) {
      for (int k = 0; k <= 20; k++) {
        dp[i][j][k] = INF;
      }
    }
  }

  while(true) {
    int a, b, c;
    // cin >> a >> b >> c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == -1 && b == -1 && c == -1) {
      break;
    }

    printf("w(%d, %d, %d) = %lld\n", a, b, c, solve(a, b, c));
  }

  return 0;
}
