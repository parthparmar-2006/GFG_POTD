#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};
class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* dummy = new Node(0);
        Node* temp = dummy;
        Node* h1 = head1;
        Node* h2 = head2;
        while (h1 && h2) {
            if (h1->data < h2->data) {
                dummy->next = h1;
                h1 = h1->next;
            } else {
                dummy->next = h2;
                h2 = h2->next;
            } dummy = dummy->next;
        }
        if (h1) {
            dummy->next = h1;
        } 
        if (h2) {
            dummy->next = h2;
        } return temp->next;
    }
};