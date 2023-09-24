#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);


	stack<int> s;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;

		if (tmp == 0)
			s.pop();
		else
			s.push(tmp);
	}

	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	cout << sum << endl;

	return 0;
}