//https://www.codechef.com/JUNE20B/problems/XYSTR
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int count = 0;
    string s;
    while(t--) {
        cin >> s;
        for(int i = 0; s[i]!='\0'; i++) {
            if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x')){
                count++;
                i++;
            }
        }
        printf("%d\n",count);
        count = 0;
    }
}

