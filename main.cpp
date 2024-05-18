#include <iostream>
#include <conio.h>

using namespace std;

struct Node{
public:
    int data;
    Node *next;
};
    
void push(Node** head_ref, int data)
{
    Node* ptr1 = new Node();
    ptr1->data = data;
    ptr1->next = *head_ref;

    if(*head_ref != NULL){
        Node* temp = *head_ref;
        while(temp->next != *head_ref){
            temp = temp->next;
        }
        temp->next = ptr1;
    }
    else{
        ptr1->next =ptr1;
    }
    *head_ref = ptr1;
}

void printList(Node* head)
{
    Node* temp = head;
    if(head != NULL){
        do{
            cout<<temp->data<<" ";
            temp = temp->next;
        }while(temp!=head);
    }
    cout << endl;
}
    
void deleteNode(Node** head, int key)
{
    if(*head == NULL){
        cout << "List is Empty"; 
        return;
    }

    if((*head)->data == key && (*head)->next == *head){
        free(*head);
        *head = NULL;
        cout << "The single Item was removed.";
        return;
    }

    Node *last = *head, *d;

    if((*head)->data == key){
        while(last->next != *head){
            last = last->next;
        }
        last->next = (*head)->next;
        free(*head);
        *head = last->next;
        return;
    }

    while(last->next != *head && last->next->data != key){
        last = last->next;
    }

    if(last->next->data == key){
        d = last->next;
        last->next = d->next;
        free(d);
    }
    else{
        cout << "The key is not present in the list.\n";
    }
}    

int main()
{
    Node* head = NULL;

    push(&head, 2);
    push(&head, 5);
    push(&head, 7);
    push(&head, 8);
    push(&head, 10);
    push(&head, 12);

    cout << "List before Deletion: ";
    printList(head);

    deleteNode(&head, 7);

    cout << "List after Deletion: ";
    printList(head);

    return 0;
}