/*Date: 19/06/2020
Author: Khalid Hossain Akash
Course : sde problem's selected by striver_79
Problem: 1
Source code: https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/
*/

#include<bits/stdc++.h>
using namespace std;
// limitation of method one is it can not handle if there's multiple zeros present in the array.
void find_duplicate_method1(int *arr,int n) {
    for(int i = 0; i < n; i ++) {
        if(arr[abs(arr[i])] >= 0) {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        } else {
            printf("%d ",abs(arr[i]));
        }
    }
}
// this method can perfectly solve the issue with method 1.
// use modulo property . and circular property . as the array element's are from 0 - n-1 we can use it as index


void find_duplicate_method2(int *a,int n) {
    for(int i = 0; i < n; i++) {
        a[a[i]%n] = a[a[i]%n]+n;
    }
    for(int i = 0; i < n; i++) {
        if(a[i] >= n*2) {
            cout << i << " ";
        }
    }
    cout << endl;
}
//another approach
void find_duplicate_method3(int *a,int n) {
    for(int i = 0; i < n; i++) {
        int index = a[i]%n;
        a[index] += n;
    }
    for(int i = 0; i < n; i++) {
        if((a[i]/n)>1){
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d",&arr[i]);
    }

    //find_duplicate_method1(arr,n);
    //find_duplicate_method2(arr,n);
    find_duplicate_method3(arr,n);

}

