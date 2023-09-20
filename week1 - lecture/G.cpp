#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;
using namespace std;


int solve() {
  int n, m;

  cin >> n >> m;

  for(int i = 0; i < n; i++)
    cin >> arr[i];

  int result = 0;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      for(int k = j + 1; k < n; k++){
        int sum = arr[i] + arr[j] + arr[k];
        if (sum <= m){
          result = max(result, sum);
        }
      }
    }
  }

  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  cout << solve() << endl;

  return 0;
}
