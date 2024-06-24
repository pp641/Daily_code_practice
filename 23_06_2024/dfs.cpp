#include<iostream>
#include<vector>
using namespace std;

void dfsOfGraph(int node , vector<int>adj[] , int V , vector<int>visited  , vector<int>&answer ){

    visited[node]  = 1;
    answer.push_back(node);
    for( auto it : adj[node]){
        
        if(!visited[node]){
            dfsOfGraph(node , adj ,V, visited , answer);
        }
    }
}


vector<int> dfsAnswer(int V , vector<int>adj[]){
    vector<int>visited(V,0);
    int start = 0;
    vector<int>answer;
    dfsOfGraph(start, adj , V , visited, answer);
    return answer;
}


int main(){





    return 0;
}