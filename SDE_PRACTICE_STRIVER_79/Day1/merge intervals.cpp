#include<bits/stdc++.h>
using namespace std;
struct Interval {
    int start;
    int end;
};
bool compareInterval(Interval it1,Interval it2) {
    return it1.start<it2.start;
}

void merge_interval(Interval *a,int n) {
    if(n<=0) {
        cout << "Empty Interval.\n";
    }
    sort(a,a+n,compareInterval);
    stack<Interval> s;
    s.push(a[0]);
    for(int i = 1; i < n; i++) {
        Interval top = s.top();
        if(top.end<a[i].start){
            s.push(a[i]);
        } else if(top.end<a[i].end) {
            top.end = a[i].end;
            s.pop();
            s.push(top);
        }
    }
    //print element's of stack
    while(!s.empty()) {
        Interval top = s.top();
        cout << "[" << top.start << "," << top.end << "] ";
        s.pop();
    }
}

int main() {
    //Interval a[] = {{6,8},{1,9},{2,4},{4,7}};
    Interval a[] = {{1,2},{3,5},{4,6},{10,13},{12,15}};
    int n = sizeof(a)/sizeof(a[0]);
    merge_interval(a,n);
}

