/*Date: 08/06/2020
Author: Khalid Hossain
We will be able to find if the string is unique or not and also the latter which one is duplicated .
we will also be able to count the latter . that how many time's it occurred and at which position...
*/
/*
Bit masking: checking the bit wheather it is on or not is called masking.
Bit merging: setting the bit on or off is called merging.
*/
#include<bits/stdc++.h>
using namespace std;
// now i have to define a data structure to  hold the duplicated latter, it's occurrence and it's position.
// that is quite tough.

void check_for_lower_case(string s) {
    int h=0,x=0;
    int lower_case = 97;
    for(int i = 0; s[i]!='\0'; i++) {
        x = 1;
        x = x << (s[i]-lower_case);
        if(x&h) {//another way of checking is x&h>0
            cout << s[i] << " is duplicate. " << endl;
        }
        else {
            h = x|h;
        }
    }
}
void check(string s) {
    int upper_hash=0,lower_hash=0,x=0;
    for(int i = 0; s[i]!='\0'; i++) {
        if(s[i]>=97) {//for lower case
            x = 1;
            x = x << (s[i]-97);
            //check either the bit is already on or not
            if(x&lower_hash){
                cout << s[i] << " is duplicate. " << endl;
            } else {
                lower_hash = x|lower_hash;
            }
        } else { // for upper case;
            x = 1;
            x = x << (s[i]-65);
            if(x&upper_hash){
                cout << s[i] << " is duplicate. " << endl;
            } else {
                upper_hash = x|upper_hash;//bit merging . setting the bit on.
            }

        }
    }
}
int main() {
    string s;
    cin >> s;
    /*for lower_case only
        check_for_lower_case(s);
    */
    check(s);


}
