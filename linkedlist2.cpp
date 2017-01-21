#include <iostream>
#include <conio.h>
using namespace std;


class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }

private:
    Node *head; 
};


void menu(){
	

	cout<<" Main Menu \n"<<endl;
	cout<<" [1] : Insert into linked list \n"<<endl;
	cout<<" [2] : Pop \n"<<endl;
	cout<<" [3] : Exit \n"<<endl;
	
	
	
}

int main(){
	LinkedList list;
	
	int choice, a, x ;
	while(1){
		system("cls");
		menu();
		cout<<"----------\n";
		cout<<"Enter choice: ";
		cin>>choice;
		switch(choice){
			case 1:{
			cout<<" Enter number:  ";
			cin>>a;
		    list.addValue(a);
		    cout<<" Value Added ! ";
			break;
			}
			case 2:{
			list.popValue();
			cout<<" Successfully removed ! \n";
			break;
			}	
			case 3: exit(1);
			default: break;
		}
		getch();
	}	
  return 1;
	
}
