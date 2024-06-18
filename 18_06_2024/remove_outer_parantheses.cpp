#include<iostream>
#include<stack>
#include<vector>

using namespace std;
    
    // Problem  ::  https://leetcode.com/problems/remove-outermost-parentheses/
    
    string removeOuterParentheses(string s) {

        stack<char>stacker;
        string result;

        for(int i = 0; i < s.length(); i++){
            if(!stacker.empty()) result += s[i];
            if(s[i] == '(')
                    stacker.push(s[i]);
            else
                    stacker.pop();
            
            if(stacker.empty())
                    result.pop_back();

        }

        return result;
    }


    int main(){
        string str=  "(()())(())";
        cout<<removeOuterParentheses(str)<<endl;
        return 0;
    }