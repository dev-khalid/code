//https://www.codechef.com/JUNE20B/problems/CHFICRM
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
             cin >> a[i];
        }
        bool flag = true;
        for(int i = 0; i < n; i++) {
            if(a[i]==10) {
                bool test_flag = false;
                for(int j = 0; j < i; j++) {
                    if(a[j]==5) {
                        a[j]=0;
                        test_flag = true;
                        break;
                    }
                }
                if(!test_flag) {
                    flag = false;
                    break;
                }
            }




            else if(a[i]==15) {
                bool test_flag = false;

                for(int j = 0; j < i; j++) {
                    if(a[j]==10){
                        test_flag = true;
                        a[j] = 0;
                        break;
                    }
                }
                if(!test_flag) {
                    //if i couldn't find 10 then find 2 5's
                    int first_index , sum = 0;
                    for(int j = 0; j < i; j++) {
                        if(a[j]==5) {
                            sum+=5;
                            if(sum==5){
                                first_index = j;
                            }
                            if(sum==10) {
                                a[first_index] = a[j] = 0;
                                test_flag = true;
                                break;
                            }
                        }
                    }
                    if(!test_flag) {
                        flag = false;
                        break;
                    }
                }

            }


        }
        if(flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

