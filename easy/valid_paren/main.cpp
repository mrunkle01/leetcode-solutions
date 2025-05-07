#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0; i<s.length();i++){
            char x = s[i];
            if(x == '{' || x == '(' || x == '['){
                stk.push(x);
            }
            else{
                if (stk.empty()) {
                    return false;
                }
                if (x == ')' && stk.top() == '(') {
                    stk.pop();
                }
                else if(x == '}' && stk.top() == '{'){
                    stk.pop();
                }
                else if( x == ']' && stk.top() == '[' ){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(stk.empty()){
            return true;
        }
        return false;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}