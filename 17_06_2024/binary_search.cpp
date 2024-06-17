#include<iostream>
#include<vector>
using namespace std;

int binary_search( vector<int>&vec , int data){

    int start = 0 , end = vec.size()-1;
    while( start < end){
        int mid =  start + (end-start)/2;
        if(vec[mid] < data){
            start = mid+1;
        }else if(vec[mid] > data){
            end = mid-1;
        }else{
            return mid;
        }
    }

    return -1;
}

int main(){

    vector<int>vec=  {1,2,3,4,5,6,7,8,9,10};
    cout<<binary_search(vec,5)<<endl;
    cout<<binary_search(vec,100)<<endl;

    return 0;
}