#include<iostream>
#include<vector>
using namespace std;

int upper_bound(vector<int>&vec , int num){
    int low = 0 , high = vec.size()-1;
    int ans = vec.size();
    while(low<=high){
        int mid = low +  (high-low)/2;
        if(vec[mid] <= num ){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){


    vector<int>vec = {1,2,3,4,5,6,7,9};
    cout<<upper_bound(vec,7)<<endl;
    cout<<upper_bound(vec,3)<<endl;
    cout<<upper_bound(vec,8)<<endl;
    return 0;
}


