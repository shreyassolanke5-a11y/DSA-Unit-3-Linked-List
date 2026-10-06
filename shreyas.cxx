#include <iostream>
using namespace std;

struct Node {
    int ticketNo;
    string movieName;
    Node *next;
};

int main() {
    Node *head = NULL, *temp, *newNode;

    for(int i = 0; i < 3; i++) {
        newNode = new Node;

        cout << "Enter Ticket No and Movie Name: ";
        cin >> newNode->ticketNo >> newNode->movieName;

        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else {
            temp = head;

            while(temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
        }
    }

    cout << "\nMovie Ticket Records:\n";

    temp = head;

    while(temp != NULL) {
        cout << "Ticket No: " << temp->ticketNo
             << " Movie: " << temp->movieName << endl;

        temp = temp->next;
    }

    return 0;
}