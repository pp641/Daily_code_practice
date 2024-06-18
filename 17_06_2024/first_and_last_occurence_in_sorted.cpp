#include<iostream>
#include<vector>
using namespace std;

int getFirstOccurence(vector<int>&vec , int number){
    int low = 0;
    int high  = vec.size()-1;
    int n = vec.size();
    while(low < high){
        int mid =  (low + high)/2 ;
        if(vec[mid] == number){
              
              if(mid == 0 || vec[mid-1] != number){
                return mid;
              }else{
                high = mid-1;
              }
        }else if (vec[mid] < number){
                low = mid+1;
        }else{
                high = mid-1;
        }

    }
    return -1;
}

int getLastOccurence(vector<int>&vec , int number){
    int low = 0;
    int high  = vec.size()-1;
    int n = vec.size();
    while(low < high){
        int mid =  (low + high)/2 ;
        if(vec[mid] == number){
              if(mid == n-1 || vec[mid+1] != number){
                return mid;
              }else{
                low = mid+1;
              }
        }else if (vec[mid] < number){
                low = mid+1;
        }else{
                high = mid-1;
        }

    }
    return -1;
}


int main(){



    vector<int>vec = {1,2,3,4,5,5,5,5,5,6};
    cout<<getFirstOccurence(vec,5)<<endl;
    cout<<getLastOccurence(vec,5)<<endl;
    return 0;
}