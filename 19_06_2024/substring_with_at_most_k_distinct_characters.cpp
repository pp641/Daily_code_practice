#include<iostream>
#include<vector>
using namespace std;

// Problem ::  https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1  

//Sliding window technique

 long long ok(string &s, int k, int n)
{
   int i=0, j=0;
   vector<int>mp(26,0);
   long long ans = 0 ;
   int distinct = 0;
   while( j<n)  
   {
       mp[s[j]-'a']++;
       if(mp[s[j]-'a']==1)distinct++;
       while(distinct>k)
       {

           if(mp[s[i]-'a']==1)
           {
               distinct--;
               mp[s[i]-'a']--;
           }
           else
            mp[s[i]-'a']--;
           i++;
       }
       ans+=(j-i+1);
       j++;

   }

   return ans;


}


int findNumberOfSubstring(string s, int k ){
    int n = s.length();
    return ok(s,k,n) - ok(s,k,n-1);
}

int main(){

}