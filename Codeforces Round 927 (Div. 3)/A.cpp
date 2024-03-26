#include <bits/stdc++.h>
using namespace std;

void f(int n, string s) {
    
    int res =0;
    int sum =0;
    for(int i = 0; i<n; i++){
        if(s[i]=='@'){
            sum++;
        }
        else if(s[i]=='.') continue;
        else{
            if(i==n-1 || s[i+1]=='*'){
                break;
            }
        }
    }
    cout << sum <<endl;
}

int main() {
    int ttt;
    cin >> ttt;
    while (ttt--) {
        int n;
        string s;
        cin >> n;
        cin>>s;

        f(n, s);
    }

    return 0;
}
