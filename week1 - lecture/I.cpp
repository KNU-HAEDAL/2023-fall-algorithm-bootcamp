#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;
using namespace std;


int n;

int solve() {
  for(int i = 1; i < n; i++){
    int sum, number;
    sum = number = i;

    while(number > 0){
      sum += number % 10;

      number /= 10;
    }

    if (sum == n){
      return i;
    }
  }

  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  cin >> n;

  cout << solve() << endl;

  return 0;
}
