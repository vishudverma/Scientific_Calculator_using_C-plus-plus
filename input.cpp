#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

class Linked_list_implement{

    //defines a linked list which I'll use later to get input to save memory and make thr program more psace efficient
    struct input_value{
        long double data;
        input_value *next;
    };

    //stock functions for using linked list
    //definitions of the basic command values push, print and pop

    /// @brief pushes/addes the new value of linked-lis
    /// @param head_ref to take reference of the available memory from heap or the top of the current cell in the list(joining point)
    /// @param data the data that is to be stored within the list
    void push(input_value** head_ref, long double data){
        input_value* ptr1 = new input_value();
        ptr1->data = data;
        ptr1->next = *head_ref;

        if(*head_ref != NULL){
            input_value* temp = *head_ref;
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

    /// @brief Prints all the values in the linked-list
    /// @param head takes in the top address of the linked-list
    void print(input_value* head)
    {
        input_value* temp = head;
        if(head != NULL){
            do{
                cout<<temp->data<<" ";
                temp = temp->next;
            }while(temp!=head);
        }
        cout << endl;
    }

    /// @brief function deletes the given value from the linked-list
    /// @param head takes in the starting point of the linked-list to start searching for the given value
    /// @param key value given by user to remove from the linked-list
    void pop(input_value** head, int key)
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

        input_value *last = *head, *d;

        //given value is at the beginning of linked-list
        if((*head)->data == key){
            while(last->next != *head){
                last = last->next;
            }
            last->next = (*head)->next;
            free(*head);
            *head = last->next;
            return;
        }

        //given value is at the end of the linked-list
        while(last->next != *head && last->next->data != key){
            last = last->next;
        }

        //given value is somewhere in between the linked-list
        if(last->next->data == key){
            d = last->next;
            last->next = d->next;
            free(d);
        }
        else{
            cout << "The key is not present in the list.\n";
        }
    }    
};