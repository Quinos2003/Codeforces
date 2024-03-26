// #include <bits/stdc++.h>
// using namespace std;

// int f(int n ,int m,string s, vector<int>& a){
    
//     unsigned long long prod = 1;
//     for(int i = 0; i<n; i++){
//         prod = prod*a[i];
//     }
//     int res = prod % m;
//     vector<int> b;
//     b.push_back(res);
//     int st=-1 , ed = n;
//     for(int i =0;i<n-1;i++){
//         if(s[i]=='R'){
//             ed--;
//             prod = prod/a[ed];
//             b.push_back(prod%m);
//         }
//         else{
//             st++;
//             prod = prod/a[st];
//             b.push_back(prod%m);
//         }
//     }
//     for(int i = 0; i<n; i++){
//         cout << b[i] << " ";
//     }
//     return res;
// }
// int main() {
//     int ttt;
//     cin >> ttt;
//     while (ttt--) {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         vector<int> a(n);
        
//         for(int i = 0; i<n; i++){
//             cin>> a[i];
//         }
//         cin >> s;

//         int res = f(n,k,s,a);
//         // cout << res <<endl;
//     }
    
//     return 0;
// }
// WRONG NEED TO DO OPPOSITE 

#include <bits/stdc++.h>
using namespace std;

void f(int n ,int m,string s, vector<int>& a){
    if(n==1){
        cout << a[0]%m <<endl;
        return;
    }
    vector<int> b;
    int st=-1 , ed = n;
    // LRRL
    
    for(int i =0;i<n;i++){
        if(s[i]=='R'){
            ed--; 
        }
        else{
            st++;
        }
    }
    int prod = 1;

    for(int i = n-1; i>=0; i--){
        if(s[i]=='R'){
            
            prod*=a[ed++];
            prod%=m;
            b.push_back(prod%m);
        }
        else{
            
            prod*=a[st--];
            prod%=m;
            b.push_back(prod);
        }
    }

    // for(int i = 0; i<n; i++){
    //     cout << b[i] << " ";
    // }
    for(int i = n-1; i>=0; i--){
        cout << b[i] << " ";
    }
    return ;
}
int main() {
    int ttt;
    cin >> ttt;
    while (ttt--) {
        int n, k;
        cin >> n >> k;
        string s;
        vector<int> a(n);
        
        for(int i = 0; i<n; i++){
            cin>> a[i];
        }
        cin >> s;

        f(n,k,s,a);
    }
    
    return 0;
}