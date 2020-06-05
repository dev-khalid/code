#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int a[] = {1,3,5,2,7,10,-2,8,-11,20};
    int a[] = {-2,-3,-4};
    int n=sizeof(a)/sizeof(a[0]);
    int max_so_far= INT_MIN,max_ending_here = 0;
    for(int i = 0; i < n; i++) {
        /*max_ending_here += a[i];
        if(max_ending_here < a[i]) {
            max_ending_here = a[i];
        }
        */
        max_ending_here = max(a[i],max_ending_here+a[i]);
        /*//here we are maximizing max_ending_here,max_ending_here+a[i],a[i]
        if(max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
        */
        max_so_far = max(max_so_far,max_ending_here);
    }
    cout << max_so_far << endl;
}
