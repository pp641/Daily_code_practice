#include<iostream>
#include<algorithm>
using namespace std;

struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 

class Solution{
  public:
  
    Node *insertAtBegining(Node *head, int x) {
                Node *newnode = new Node(x);
                newnode->next = head;
                return newnode;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        Node *newnode = new Node(x);
        Node *temphead = head;
        if(temphead == NULL)
            return newnode;
        
                
            while(temphead->next != NULL){
                    temphead = temphead->next;
                }
                temphead->next = newnode;
        
        return head;
    }




    Node  *returnMidOfLinkedList(Node *head){
        Node *slow = head;
        Node *fast = head;

        while(fast->next != NULL || fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
    return slow;
    }



    Node *reverseLinkedList(Node *head){

        Node *temp = head;
        Node *prev = NULL;

        

    }

};
