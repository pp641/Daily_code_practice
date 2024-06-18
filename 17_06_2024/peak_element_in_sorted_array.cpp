#include<iostream>
#include<vector>

using namespace std;


int findPeakElement(vector<int>&vec){
    int n  = vec.size();
    if(vec[0] > vec[1]  )   return 0;
    if(vec[n-1] > vec[n-2] ) return n-1;
    int low = 0, high = n-2;
    while(low < high){
        int mid =  (low + high)/2;

        if(vec[mid-1] < vec[mid] && vec[mid+1] < vec[mid]) return mid;

        if(vec[mid]< vec[mid+1]) low =  mid+1;
        else high = mid-1;

    }
    return -1;
}

int main(){

    vector<int>vec = {1,2,3,4,5,6,5,4,3,2,1};
    cout<<findPeakElement(vec)<<endl;
    return 0;
}