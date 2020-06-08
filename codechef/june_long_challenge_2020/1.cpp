#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) {
        int ans = 0;
        int n,k;
        scanf("%d%d",&n,&k);
        int a;
        while(n--) {
            scanf("%d",&a);
            if(a>k) {
                ans = ans + (a-k);
            }
        }
        printf("%d\n",ans);
    }
}

