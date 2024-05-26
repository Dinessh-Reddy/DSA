#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        string reverse_string(string s){
            int i = 0, j = s.length() - 1;
            while(i < j){
                char c = s[i];
                s[i] = s[j];
                s[j] = c;
                i++;
                j--;
            }
            return s;
        }
};


int main(){
    Solution s;
    string str = "abcdef";
    cout << s.reverse_string(str) << endl;
}