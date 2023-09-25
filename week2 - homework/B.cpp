#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;
using namespace std;


queue<int> q;

int main() {
	int n, k;

  cin >> n >> k;

	for (int i = 1; i <= n; i++)
		q.push(i);

  cout << "<";

	int count = 0;
	while (!q.empty()) {
		count++;

		if (count == k) {
      cout << q.front();

			q.pop();
			count = 0;

			if (!q.empty()) {
        cout << ", ";
      }
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
  cout << ">" << endl;

	return 0;
}