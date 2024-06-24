#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longestConsecutiveNumber(vector<int>&vec){

    int n =  vec.size();
    if(n == 0) return 0; 
    int longest = 1;
    unordered_set<int>u_set;
    for( int i = 0; i< n; i++) {
        u_set.insert(vec[i]);
    }

    for( auto it :  vec){

        if(u_set.find(it-1) == u_set.end()){

            int count = 1;
            int x = it;

            while(u_set.find(x+1) != u_set.end()){

                    x =x +1;
                    count = count+1;
            }    
        longest = max(longest , count);
        }


    }

    return longest;
}
int main(){



    return 0;
}