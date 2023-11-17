#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;

  vector<int> edges(n);
  for(int i = 0; i < n - 1; i++) {
    cin >> edges[i];
  }

  ll minCost = 987654321;
  ll result = 0;
  for (int i = 0; i < n - 1; i++) {
    ll cost;
    cin >> cost;

    if (cost < minCost) {
      minCost = cost;
    }

    result += minCost * edges[i];
  }
  cin >> n; // 불필요한 입력 하나 버리기.

  cout << result << endl;

  return 0;
}
