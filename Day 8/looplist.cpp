#include<iostream>
using namespace std; 
class Node { 
public: 
    int data; 
    Node* next; 
}; 
void push(Node** head_ref, int new_data) 
{ 
    Node* new_node = new Node(); 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
}
int countNodes(struct Node *n) 
{ 
   int res = 1; 
   struct Node *temp = n; 
   while (temp->next != n) 
   { 
      res++; 
      temp = temp->next; 
   } 
   return res; 
} 
int detectloop(Node* list) 
{ 
    Node *slow_p = list, *fast_p = list; 
    while (slow_p && fast_p && fast_p->next) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            {cout << "Found Loop"; 
            return countNodes(slow_p); 
            }
        }
    } 
    return 0; 
} 
int main() 
{ 
    int a;
    Node* head = NULL; 
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 10); 
    head->next->next->next->next = head; 
    a=detectloop(head); 
    cout<<a<<"nodes";
    return 0; 
} 
