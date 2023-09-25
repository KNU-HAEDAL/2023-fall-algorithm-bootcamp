#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[101];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, Max = 0;

    cin >> n >> m;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                int sum = arr[i] + arr[j] + arr[k];
                if (sum <= m){
                    Max = max(Max, sum);
                }
            }
        }
    }

    cout << Max << endl;

    return 0;
}