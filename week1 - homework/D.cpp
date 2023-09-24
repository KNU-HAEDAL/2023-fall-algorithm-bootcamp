#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, count = 0, number = 665;

    cin >> n;

    while(count < n){
        number++;

        int continue_6 = 0, temp = number;

        while(temp > 0){
            int i = temp % 10;

            if (i == 6)
                continue_6++;
            else
                continue_6 = 0;

            if (continue_6 >= 3){
                count++;
                break;
            }

            temp /= 10;
        }
    }

    cout << number << "\n";

    return 0;
}