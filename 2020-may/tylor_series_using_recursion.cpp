#include <bits/stdc++.h>
using namespace std;
double exponent(int x,int y) {
    static double p = 1,f = 1,r;
    if(y==0) {
        return 1;
    }
    else {
        r = exponent(x,y-1);
        p = p*x;
        f = f*y;
        return r + p/f;
    }
}
double exp_honor(int x, int y) {
    double sum = 1;
    for(;y>0;y--) {
        sum = sum*(x*1.0/y) + 1;
    }
    return sum;
}
double exp_hornor_recursive(int x,int y) {
    static double sum = 1;
    if(y==0) {
        return sum;
    }
    else {
        sum = sum * (x*1.0/y) + 1;
        return exp_hornor_recursive(x,y-1);
    }
}
int main()
{
    int x,y;
    cin >> x >> y;
    cout << exp_hornor_recursive(x,y) << endl;
}

