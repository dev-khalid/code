/*
Date: 01/06/2020[dd/mm/yy]
Author:Khalid Hossain Akash
source: https://www.youtube.com/watch?v=tMRZ6gqFYdg&list=PLl4Y2XuUavmu_3gt08VNTTFXXlhJ8k8Fs
*/
#include<bits/stdc++.h>
using namespace std;
/*Problem : number of numbers from 1 to n that are divisible by primes till 20 */
//inclusion exclusion principle
typedef long long ll;
/* Alt to previous line
#define ll long long
*/
int main() {
    int test_case;
    cin >> test_case;
    ll prime[] = {2,3,5,7,11,13,17,19};
    while(test_case--){
        ll n;
        cin >> n;
        int subsets = (1<<8)-1;//similar as 2^8 // in inclusion exclusion principle
        //(aUbUc) = (a)+(b)+(c)-(a&b)-(b&c)-(c&a)+(a&b&c)
        /*2^n-1 subset's to generate . here a,b,c,(a&b),b&c,c&a,a&b&c*/
        ll ans = 0;
        for(int i = 1; i <= subsets; i++) {//from 1 to number of subsets . here it's 7
            ll denom = 1ll;
            ll setbits = __builtin_popcount(i);//the number of set bits. we will take subset as per the number of setbits.
            //if the setbit is odd then we will add it to ans if even then we have to substract.
            for(int j = 0; j<=7; j++) {
                if(i&(1<<j)){
                    denom = denom * prime[j];//those position's which are set will be multiplied to denominator.
                }
            }
            if(setbits&1){
                ans += n/denom;
            } else {
                ans -= n/denom;
            }
        }
        cout << ans << endl;
    }
}
/*
Input:
5
5
10
12
15
18
Output:
4
9
11
14
17
*/
