/*
Date:20/06/2020
Author: Khalid Hossain Akash
Course : sde problem's selected by striver_79
Problem: 2
*/

#include<bits/stdc++.h>
using namespace std;
void my_method(int *a,int n) {
    int i = 0, j = 1, k = n-1;
    while(i<=k) {
        if(a[i]==1) {
            bool found = false;
            for(;j<=k; j++){
                if(a[j]==0) {
                    found = true;
                    break;
                }
            }
            if(found){
                swap(a[i],a[j]);
            }
            i++;
        }
        else if (a[i]==2) {
            swap(a[i],a[k]);
            k--;
        } else {
            i++;
        }
    }
}
void dutch_national_flag_algorithm(int *a,int n) {
    int low = 0,mid = 0, high = n-1;
    while(mid<=high) {
        switch(a[mid]){
        case 0:
            {
                swap(a[low],a[mid]);
                low++;
                mid++;
                break;
            }
        case 1:
            {
                mid++;
                break;
            }
        case 2:
            {
                swap(a[mid],a[high]);
                high--;
                break;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers.\n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    //my 2 pointer method to sort the array
    //my_method(a,n);


    //dutch national flag algorithm to segregate 0's 1's and 2's
    dutch_national_flag_algorithm(a,n);
    for(int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
}

