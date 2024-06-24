#include<iostream>
#include<vector>
using namespace std;

int longestSubStringWithoutRepeating(string st){
    vector<int>mpp(256,-1);
    int left = 0;
    int right = 0;
    int n = st.length();
    int longestlength = 0;
    while(right < n){
        if(mpp[st[right]] != 1){
            left = max(left , mpp[st[right]]+1);
        }
        mpp[st[right]] = right;
        longestlength  = max(longestlength , right-left+1);
        right++;
    }
    return longestlength;
}

int main(){

    string st = "abcdefa";

    cout<<longestSubStringWithoutRepeating(st)<<endl;


    return 0;
}