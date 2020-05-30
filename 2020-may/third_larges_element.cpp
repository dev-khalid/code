/*
Date: 30/05/2020
Source:https://www.geeksforgeeks.org/third-largest-element-array-distinct-elements/
*/
#include<bits/stdc++.h>
using namespace std;

/*
This section is to find second large number of a big array
int main() {
    int t;
    //t is very large 10 power 5 so it's costly to save all the element's in a array or in other ds when i only need
    // first second and third largest number .
    int first, second , n;
    first = second = INT_MIN;
    cin >> t;
    while(t--) {
        scanf("%d",&n);
        if(n > first) {
            second = first;
            first = n;
        }
        if(second < n && first != n) {
            second = n;
        }
    }
    cout << "First large one is : " << first << "\nSecond large one is: " << second << endl;
}
*/
int main() {
    int t;
    cin >> t;
    int n;
    int first,second,third;
    first=second=third=INT_MIN;
    while(t--){
        scanf("%d",&n);
        if(first < n){
            third = second;
            second = first;
            first = n;
        }
        else if(second < n) {
            third = second;
            second = n;
        }
        else if(third < n) {
            third = n;
        }
    }
    cout << first << " " << second << " " << third << endl;
}
