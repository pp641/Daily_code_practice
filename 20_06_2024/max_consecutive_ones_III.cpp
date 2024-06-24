#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
    int longestOnes(vector<int>& nums, int k) { 
        int zeroesCount = 0 ;
        int onesCount = 0;
        int maxLength = 0;
        int left= 0 ;
        int right = 0;
        int n = nums.size();
        while(right < n){
            if(nums[right] == 0){
                zeroesCount++;
            }else{
                onesCount++;
            }
            if(zeroesCount == k ){
                maxLength = max(zeroesCount+onesCount , maxLength);
            }
            if(zeroesCount > k){
                while(zeroesCount !=k){
                    if(nums[left] == 0){
                        zeroesCount--;
                    }else{
                        onesCount--;
                    }
                    left++;
                }
            }
            right++;
        maxLength = max(zeroesCount+onesCount , maxLength);

        }
    return maxLength;
    }


 int main(){

     vector<int>vec=  {1,1,1,0,0,0,1,1,1,1,0};
     int k =2;
     cout<<longestOnes(vec,k)<<endl;
 }
   