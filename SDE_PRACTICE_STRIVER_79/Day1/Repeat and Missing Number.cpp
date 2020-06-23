
/*
Date: 22/06/2020
Author: Khalid Hossain Akash
Course: SDE Problem's by Striver_79
Problem: 3
Source: geeksforgeeks
*/
#include<bits/stdc++.h>
using namespace std;
void method1(int *a,int n) {
    for(int i = 0; i < n; i++) {
        a[(a[i]%(n+1))-1] += n+1;
    }
    /*If want to see what's happening then release the code from comment section and run
    cout << "Modified Array : " << endl;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    */
    for(int i = 0; i < n; i++) {
        if(a[i]>((n+1)*2)){
            cout << "Repeating : " << i+1 << endl;
        }
        if(a[i]<(n+1)) {
            cout << "Missing: " << i+1 << endl;
        }
    }
}
void method2(int *a,int n) {
    for(int i = 0; i < n; i++) {
        if(a[abs(a[i])-1]>0) {
            a[abs(a[i])-1] *= -1;
        } else {
            cout << "Repeating: " << abs(a[i]) << endl;//there's a problem with this line of code .
            //if there is more then two occurrence of a number then it will show that
            //number multiple time.that's annoying.
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i]>0) {
            cout << "Missing : " << i+1 << endl;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&a[i]);
    }
    //method1(a,n);
    //method2(a,n);

}
