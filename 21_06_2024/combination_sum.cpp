#include<iostream>
#include<vector>
using namespace std;

void findCombination(int index ,  int target , vector<int>&arr , vector<vector<int>>&ans , vector<int>&ds){
    if(index == arr.size()){

        if(target == 0)
             ans.push_back(ds);
    
        return;
    }

    if(arr[index] <= target){
        ds.push_back(arr[index]);
        findCombination(index,target-arr[index], arr, ans , ds);
        ds.pop_back();
    }
    findCombination(index+1 ,target,arr,ans,ds);
}

vector<vector<int>> CombinationSum(vector<int>&vec , int target){
    vector<int>ds;
    vector<vector<int>>ans;
    findCombination(0,target,vec , ans , ds );
    return ans;
}

int main(){

    
    vector<int>vec = {2,3,6,7};
    int target  = 7;
    vector<vector<int>>answer;
    answer = CombinationSum(vec,target);

    return 0;
}