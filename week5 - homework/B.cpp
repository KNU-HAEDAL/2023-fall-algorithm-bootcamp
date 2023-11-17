#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;
using namespace std;


int n, k;
int arr[10000];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

	ll left = 0,right = LLONG_MAX;
	cin >> k >> n;

	for (int i = 0; i < k; i++) {
    cin >> arr[i];
	}

	int result = 0;
	while (left <= right) {
		ll sum = 0, mid = (left+right)/2;
		for (int i = 0; i < k; i++) {
			sum += arr[i] / mid;
		}
		if (sum < n) {
			right = mid - 1;
		}
		else if (sum >= n) {
			if (result < mid) {
				result = mid;
      }
			left = mid + 1;
		}
	}

  cout << result << endl;

	return 0;
}