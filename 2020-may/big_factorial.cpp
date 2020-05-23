/*Date: 23/05/2020
Author: Khalid
Source: coding block's math live class.
Time complexity: n!
*/

#include<bits/stdc++.h>
using namespace std;
const int max_size = 10000;
void multiply(int *a,int &index,int number){
    int carry = 0;
    int product;
    for(int i = 0; i < index; i++) {
        product = a[i]*number + carry;
        a[i] = (product%10);
        carry = product / 10;
    }
    while(carry) {
        a[index] = carry%10;
        carry/=10;
        index++;
    }
}

void big_factorial(int n) {
    int a[max_size] = {0};
    a[0] = 1;
    int index = 1;
    for(int i = 1; i<=n; i++) {
       multiply(a,index,i);
    }
    cout << "Number of digit's : " << index << endl;
    for(int i = index-1; i>= 0; i--) {
        cout << a[i];
    }
    cout << endl;
}

int main() {
    while(1){
    int n;
    cin >> n;
    big_factorial(n);
    }
}

