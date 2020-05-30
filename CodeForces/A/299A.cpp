
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++) {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+t);
    for(int i = 0; i < t; i++) {
        if(arr[i]%arr[0]!=0) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << arr[0] << endl;

}
