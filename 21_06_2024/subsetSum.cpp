#include<iostream>
#include<vector>
using namespace std;


void getSubsetSum(int index , int sum, vector<int>&subsetSumArray , vector<int>&subsetSumContainer){

    if(index == subsetSumArray.size()){
            subsetSumContainer.push_back(sum);
    }   

    getSubsetSum(index+1, sum+subsetSumArray[index] , subsetSumArray , subsetSumContainer);
    getSubsetSum(index+1, sum , subsetSumArray , subsetSumContainer);

}


vector<int> getSubsetSums(vector<int>&subsetSumArray ){

    vector<int>getSubsetSumArray;
    getSubsetSum(0,0,getSubsetSumArray, subsetSumArray );
    return getSubsetSumArray;
}



int main(){

    return 0;
}