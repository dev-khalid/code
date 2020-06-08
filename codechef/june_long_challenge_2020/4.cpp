//https://www.codechef.com/JUNE20B/problems/EOEO
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n;
        scanf("%lld",&n);
        if(n&1){
            cout << n/2 << endl;
        } else {
            while(1) {
                if(n&1) {
                    break;
                }
                n/=2;
            }
            cout << n/2 << endl;
        }
    }
    return 0;
}

