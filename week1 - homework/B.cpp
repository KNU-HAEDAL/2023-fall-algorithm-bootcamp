#include <bits/stdc++.h>
#define INF 987654321
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[9];
    bool comb[9] = {false};

    for(int i = 0; i < 9; i++)
        cin >> arr[i];
    for(int i = 0; i < 7; i++)
        comb[i] = true;

    sort(arr, arr + 9);

    do{
        int sum = 0;
        for(int i = 0; i < 9; i++)
            if (comb[i])
                sum += arr[i];

        if (sum == 100){
            for(int i = 0; i < 9; i++)
                if (comb[i])
                    printf("%d\n",arr[i]);
            break;
        }
    } while(prev_permutation(comb, comb + 9));

    return 0;
}