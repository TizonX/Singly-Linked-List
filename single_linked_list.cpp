#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
struct node* head = NULL; struct node* temp;

					// Insert in bigning
void insert_bigning(int new_data)
{
	node* new_node = new node();
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}
					// insert at the end
void insert_end(int new_data)
{
	 node* new_node = new node();
	 new_node->data = new_data;
	temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}
		temp->next = new_node;
		new_node->next = NULL;
}

					// Display data
void display()
{
	struct node* ptr;
	ptr = head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
}
					// Delete From begining
void delete_bigning()
{
	if(head == NULL)
	{
		cout<<"\nList is Empty...\n";
	}
	else
	{
		temp = head;
		head = head->next;
		delete(temp);
	}
}

							//   delete from End
void delete_end()
{
	struct node* ptr, *ptr1;
	if(head == NULL)  
        {  
            cout<<"\nlist is empty\n";  
        }  
        else if(head -> next == NULL)  
        {  
            head = NULL;  
            delete(head);  
            cout<<"\nOnly node of the list deleted ...\n";  
        } 
        else  
        {  
            ptr = head;   
            while(ptr->next != NULL)  
                {  
                    ptr1 = ptr;  
                    ptr = ptr ->next;  
                }  
                ptr1->next = NULL;  
                delete(ptr);  
                cout<<"\n Deleted Node from the last ...\n";  
            } 
}

int main()											// Main Program started
{
	int data;
	cout<<"\nChoose Options\n";
	
	int x;
	do{
		cout<<"\nchoose-options between 1 to 3:\t\n";
		cout<<"1) Insert data\n";
		cout<<"2) Display data\n";
		cout<<"3) Delete from Bigning\n";
		cout<<"4) Delete From Last\n";
		cout<<"5) Insert End\n";
		cout<<"6) EXIT\n";
		cin>>x;
	switch(x)
	{
		case 1: cout<<"\nEnter data\n";
				cin>>data;
				insert_bigning(data);
				break;
		case 2:cout<<"\nData in Linked List is...\n";
		 display();
		break;
		case 3:delete_bigning();
		cout<<"\nNode Deleted successfully...\n";
		break;
		case 4: delete_end();
		cout<<"\nData deleted from last...\n";
		break;
		case 5: cout<<"\nEnter data\n";
		cin>>data;
		insert_end(data);
		break;
		case 6: cout<<"\nEXIT\n";
		break;
		default: cout<<"\nWrong Choice...\n";
		break;
	}
}while(x!=6);
	return 0;
}
