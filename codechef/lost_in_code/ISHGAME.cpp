#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        string a,b;
        cin >> a;
        cin >> b;
        vector<char> ans;
        int h[26]={0};
        for(int i = 0; b[i]!='\0'; i++) {
            h[b[i]-'A']++;
        }
        for(int i = 0; a[i]!='\0'; i++) {
            if(h[a[i]-'A']==0) {

                ans.push_back(a[i]);
            }
        }
        for(auto c: ans) {
            cout << c;
        }
        cout << endl;
    }
}

