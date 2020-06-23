
/*
Date: 22/06/2020
Author: Khalid Hossain Akash
Course: SDE Problems by striver_79
Problem: 4
source: https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/
*/

#include <bits/stdc++.h>
using namespace std;
void merge_method1(int *a1,int *a2,int m,int n) {
    for(int i = n-1; i >= 0; i--) {
        //find the smallest element greater then a2[i] . move all elements one position ahead till the smallest
        //element is not found.
        int j,last = a1[m-1];
        for(j = m-2; j>=0 && a1[j]>a2[i]; j--) {
            a1[j+1] = a1[j];//shifting element to the right
        }
        //if there is any greater element then
        if(j!=m-2 || last > a2[i]) {
            a1[j+1] = a2[i];
            a2[i] = last;
        }
    }
}

void print_array(int *a,int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int a1[] = {1, 5, 9, 10, 15, 20},m = sizeof(a1)/sizeof(a1[0]);
    int a2[] = {2, 3, 8, 13},n = sizeof(a2)/sizeof(a2[0]);
    merge_method1(a1,a2,m,n);
    print_array(a1,m);
    print_array(a2,n);
}
