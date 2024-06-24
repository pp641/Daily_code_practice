#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>>&intervals){
    sort(intervals.begin(), intervals.end());
    vector<vector<int>>answer;
    for(int i = 0; i < intervals.size(); i++){

        if(answer.empty() || intervals[i][0] > answer.back()[1]){
            answer.push_back(intervals[i]);
        }else{
            answer.back()[1] =  max(answer.back()[1], intervals[i][1]);
        }
    }
    return answer;
}

int main(){


 vector<vector<int>>vec = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};

 // {1,3} , {2,6} , {8,10} , {15,18}

 // answer = {} {1,3} => {1,6} => {1,6} , {8,10} => 
 vector<vector<int>>answer = mergeOverlappingIntervals(vec);


    return 0;
}