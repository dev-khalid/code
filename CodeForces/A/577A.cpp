/*
Author: Khalid Hossain
Problem:https://codeforces.com/contest/577/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int binary_src(int n,int x) {
    int cnt = 0,del=0;
    int low = 1,high = n;
    while(low<=high){
        if(low*high==x){
            if(low==high) {
                del++;
            }
            cnt++;
            low++;
            high--;
        } else if(low*high<x) {
            low++;
        } else {
            high--;
        }
    }
    return (cnt*2-del);
}
int main()
{
    int n,x;
    cin >> n >> x;
    cout << binary_src(n,x);
}/*
alternative solution is :
    x occurred in a row only once in - x/i th column.
    now check if the column number exceed n or not.if exceed then don't count that .
    for(int i = 1; i <= n; i++) {
        if(x%i==0&&x/i<=n) {
            ans++;
        }
    }
    cout << ans;
}
