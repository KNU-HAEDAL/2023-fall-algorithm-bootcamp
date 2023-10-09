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

  // 5키로짜리 봉투에 설탕을 담을 수 있는 만큼 담은 후...
  // 남은 설탕을 3키로 봉투에 담아본다.
  // 남김없이 담을 수 있으면 성공.

  int count5 = n / 5;
  int count3 = 0;

  int result = -1;
  while(count5 >= 0) {
    int kilo = count5 * 5 + count3 * 3;

    if (kilo == n) {
      result = count5 + count3;
      break;
    }
    else if (kilo < n) {
      count3++;
    }
    else {
      count5--;
    }
  }

  cout << result << endl;

  return 0;
}
