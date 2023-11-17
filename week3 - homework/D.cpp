#include <bits/stdc++.h>
#define INF 987654321
using namespace std;
typedef long long ll;

int arr[100001];
int dp[100001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int Max = 0;
    Max = dp[0] = arr[0];
    for(int i = 1; i < n; i++){
        dp[i] = max(arr[i], dp[i - 1] + arr[i]);
        Max = max(Max, dp[i]);
    }

    cout << Max << endl;

    return 0;
}