#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

	int fibo[21] = { 0 };

	fibo[0] = 0;
	fibo[1] = 1;

	int n;
  cin >> n;

	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
  }

	cout << fibo[n] << endl;

	return 0;
}
