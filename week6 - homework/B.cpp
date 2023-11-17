#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;
using namespace std;


string str;
int q;
int cumSum[200001][26];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  cin >> str >> q;
  for(int i = 0; i < str.length(); i++) {
    for(int j = 0; j < 26; j++) {
      cumSum[i + 1][j] = cumSum[i][j];
    }
    cumSum[i + 1][str[i] - 'a']++;
  }

  while(q--) {
    char c;
    int l, r;

    cin >> c >> l >> r;

    cout << cumSum[r + 1][c - 'a'] - cumSum[l][c - 'a'] << "\n";
  }


  return 0;
}
