#include<stdio.h>

int binary_search( int A[],int n,int x) {
    int left,right,mid;
    left = 0;
    right = n-1;

    while(left <= right) {
        if( A[mid] == x ) {
            return mid;
        }
        if( A[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}


int main() {
    int arr[10] = {1,4,5,6,7,9,10,22,23,28};
    int len = 10;
    int x = 1;
    printf("result %d",binary_search(arr,len,x));
}
