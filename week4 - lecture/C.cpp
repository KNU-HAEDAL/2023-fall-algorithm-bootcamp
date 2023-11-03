#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;

using namespace std;


int arr[1001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


	int n, count = 0, cur = 0;

  cin >> n;
	for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		cur += arr[i];
		count += cur;
	}

  cout << count << endl;

  return 0;
}
