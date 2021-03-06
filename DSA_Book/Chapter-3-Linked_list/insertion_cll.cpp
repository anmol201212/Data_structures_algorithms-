#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;

class Node{
    public:
    int data;
    Node* next;
};
Node* head = NULL; // declared it globally so that it can be editted easily

// Function to print value of linked List and there total count
int ListLength(Node* head){
    int count = 0;
    Node* current = head;
    do{
        count++;
        cout<<current -> data <<" ";
        current = current -> next;
    }while(current != head);
    cout<<endl<<"Element after the loop ends: "<<current->data<<endl;
    return count;
}
void insertatstart(){
    Node* ptr = head;
    do{
        ptr = ptr -> next;
    }while(ptr ->next != head);
    // cout<<ptr->data;
    Node* newcll = new Node();
    cout<<"Enter the new value: ";
    cin>>newcll->data;
    newcll->next = head;
    ptr->next = newcll;
    head = newcll;
}


void insertatend(){
    Node* ptr = head;
    do{
        ptr = ptr -> next;
    }while(ptr ->next != head);
    Node* newcll = new Node();
    cout<<"Enter the new value: ";
    cin>>newcll->data;
    ptr->next = newcll;
    newcll->next = head;

}

void insertatantpt(){
    Node* ptr = head;
    cout<<"Enter the position: ";
    int pos;
    cin>>pos;
    for(int i=0;i<pos-2;i++){
        ptr=ptr->next;
    }
    Node* newcll = new Node();
    cout<<"Enter the new value: ";
    cin>>newcll->data;
    newcll->next = ptr->next;
    ptr->next = newcll;
}

int main(){
    // Declaring
    // Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // Allocating 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    //Giving data
    head -> data = 10;
    head -> next = second;
    second -> data = 20;
    second -> next = third;
    third -> data = 30;
    third -> next = head;
    int count = ListLength(head);
    cout<<"\nTotal elements: "<<count<<endl;    // \n is used for new line
    insertatstart();  // this function insert a new node at the start of any linked list
    ListLength(head);

    // insertatend();  // this function insert a new node at the end of any linked list
    // ListLength(head);  

    // insertatantpt();  // this function insert a new node at the any point of any linked list inputted by the user
    // ListLength(head);  

}
