#include <bits/stdc++.h>
#define INF 987654321
using namespace std;
typedef long long ll;


int arr[51][51];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        for(int j = 0; j < m; j++){
            if (s[j] == 'W')
                arr[i][j] = 0;
            else
                arr[i][j] = 1;
        }
    }

    int Min = INF;
    for(int i = 0; i <= n - 8; i++){
        for(int j = 0; j <= m - 8; j++){
            int count = 0, color = 0;
            for(int k = i; k < i + 8; k++){
                for(int l = j; l < j + 8; l++){
                    if (arr[k][l] != color % 2)
                        count++;
                    color++;
                }
                color++;
            }
            Min = min(Min, min(count, 64 - count));
        }
    }

    cout << Min << endl;

    return 0;
}