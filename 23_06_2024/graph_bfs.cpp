
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> findBFS(int V, vector<int> adjacent[]){

    int visited[V] = {0};
    visited[0] = 1;
    queue<int> queueContainer;
    queueContainer.push(0);
    vector<int> bfsArray;
    while (!queueContainer.empty(){

        int frontNode = queueContainer.front();
        queueContainer.pop();
        bfsArray.push_back(frontNode);
        for (auto it : adjacent[frontNode]){
            if (!visited[it]){
                visited[it] = 1;
                queueContainer.push(it);
            }
        }
    }

    return bfsArray;
}

int main()
{

    return 0;
}