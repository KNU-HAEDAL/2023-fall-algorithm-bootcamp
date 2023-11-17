#include <bits/stdc++.h>
#define INF 987654321
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;

    cin >> str;

    str += '+';

    int num = 0, result = 0;
    bool minus = false;
    for(int i = 0; i < str.length(); i++){
        if ('0' <= str[i] && str[i] <= '9'){
            num *= 10;
            num += str[i] - '0';
            continue;
        }

        if (minus)
            result -= num;
        else
            result += num;
        num = 0;

        if (str[i] == '-'){
            minus = true;
        }
    }

    cout << result << endl;

    return 0;
}