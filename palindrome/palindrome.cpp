#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool isPalindrome(string s){
            int i = 0, j = s.length() - 1;
            while(i < j){
                if(s[i] == s[j]){
                    i++;
                    j--;
                }else{
                    return false;
                }
            }
            return true;
        }
};

int main(){
    Solution s;
    if(s.isPalindrome("aba")){
        cout << "The string is palindrome" << endl;
    }else{
        cout << "The strng is not palindrome" << endl;
    }
}