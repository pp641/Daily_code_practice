#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findCombination(int index , int target , vector<int>&arr, vector<vector<int>>&ans ,vector<int>&ds){

    if(target == 0){
        ans.push_back(ds);
        return;
    }

    for(int i = index ; i< arr.size(); i++){

        if(i  > index && arr[i] == arr[i-1]) continue;
        if(arr[i] > target) break;
        ds.push_back(arr[i]);
        findCombination(index+1,target-arr[i] , arr,ans,ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationFinder(vector<int>&candidate , int target){

    sort(candidate.begin(), candidate.end());
    vector<vector<int>>answer;
    vector<int>ds;
    findCombination(0, target,candidate, answer , ds);
    return answer;
}


int main(){













    return 0;
}