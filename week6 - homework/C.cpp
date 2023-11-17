#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;
using namespace std;


int n;
ll arr[100001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);

  int i = 0, j = n - 1;
  int minimum = INT_MAX, result1 = -1, result2 = -1;
  while(i < j) {
    int sum = arr[i] + arr[j];

    if (abs(sum) < minimum) {
      minimum = abs(sum);
      result1 = i;
      result2 = j;
    }

    if (sum < 0) {
      i++;
    }
    else {
      j--;
    }
  }

  cout << arr[result1] << " " << arr[result2] << endl;

  return 0;
}
