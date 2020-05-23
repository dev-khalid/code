/*Date: 01/05/2020
Source: https://www.geeksforgeeks.org/binomial-coefficient-dp-9/
*/
#include<bits/stdc++.h>
using namespace std;
/*1.Recursive procedure
int binomial_coefficient(int n,int k) {
    if(k==0||k==n){
        return 1;
    }
    return binomial_coefficient(n-1,k-1)+binomial_coefficient(n-1,k);
}

*/
/*2.Dynamic approach
int binomial_coefficient(int n,int k) {
    int c[n+1][k+1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= min(i,k); j++) {
            if(j==0||j==i) {
                c[i][j] = 1;
            }
            else
                c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
    return c[n][k];
}
*/
/*3.Dynamic programming approach space optimal solution*/
int binomial_coefficient(int n,int k) {
    int c[k+1]={0};
    c[0] = 1;
    for(int i = 1; i <= n; i++) {
        cout << i << " th value: " << endl;
        for(int j = min(i,k); j>0; j--) {
            cout << "c["<< j << "] + c[" << j-1 << "]" << endl;
            c[j] = c[j] + c[j-1];
        }
    }
    return c[k];
}
int main()
{
    int n,k;
    cin >> n >> k;
    cout << binomial_coefficient(n,k) << endl;
}
