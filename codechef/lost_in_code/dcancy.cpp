#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n; i++) {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int sum = 0;
        int k = n-3;
        while(1) {
            if(k<0) {
                break;
            }
            sum += a[k];
            k -= 3;
        }
        printf("%d\n",sum);
    }
}

