#include <bits/stdc++.h>
#define INF 987654321
typedef long long ll;
using namespace std;


ll dac(int a, int b, int c) {
	if (b == 0)
		return 1;

	if (b % 2) {
		ll tmp = dac(a, b / 2, c) % c;
		return (((tmp * tmp) % c) * a) % c;
	}
	else {
		// ll subProblemSolution = dac(a, b / 2, c) % c;
		return ((s % c) * (s % c)) % c;
	}

}

int main(){
	int a, b, c;

  cin >> a >> b >> c;

  cout << dac(a, b, c) << endl;

	return 0;
}