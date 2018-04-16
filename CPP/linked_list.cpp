#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*list=NULL,*p,*q,*r;
class linked
{
	public:
		int data1,data2;
	void menu()
	{
		int ch;
		do
		{
			cout<<endl<<"enter your choice \n 1.Insert at beginning \n2.Display \n 3. insert at the end \n4. insert before a particular node\n5. insert after a particular node\n 7. Exit\n8. delete from beggining\n9. delete from end \n10 delete particular\n11 sort list"<<endl;
			cin>>ch;
			switch(ch)
			{
				case 1:
					insertb();
					break;
				case 2:
					display();
					break;
				case 3:
					inserte();
					break;
				case 4:
					insertbap();
					break;
				case 5:
					insertaap();
					break;
				case 7:

					break;
				case 8:
					deletefrombeg();
					break;
				case 9:
					deletefromend();
					break;
				case 10:
					deletepa();
					break;
				case 11:
					sortlist();
					break;
			}
		}while(ch!=7);
	}











	void sortlist()
	{
		if(list==NULL)
		{
			cout<<"\nList is empty";
		}
		else
		{
			q=list;
			while(q!=NULL)
			{
				r=q->next;
				while(r!=NULL)
				{
					if(q->data > r->data)
					{
						data2=q->data;
						q->data=r->data;
						r->data=data2;
					}
					r=r->next;
				}
				q=q->next;
			}
		}
	}
























	void deletefrombeg()
	{
		if(list==NULL)
		{
			cout<<"\nList is empty. can not delete element";
		}
		else
		{
			q=list;

			list=list->next;
			cout<<"\nElement "<<q->data<<" is deleted.";
			free(q);
		}
	}




























	void deletefromend()
	{

		if(list==NULL)
		{
			cout<<"\nList is empty. can not delete element";
		}
		else
		{
			if(list->next==NULL)
			{
				cout<<"\nElement "<<list->data<<" List is deleted";
				list=NULL;
			}
			else
			{
			q=list;
			while(q->next!=NULL)
			{
				r=q;
				q=q->next;
			}

			cout<<"\nElement "<<q->data<<" is deleted";
			r->next=NULL;
			free(q);
			}
		}

	}




	void deletepa()
	{
		if(list==NULL)
		{
			cout<<"\nList is empty. can not delete element";
		}
		else
		{
			cout<<"\nWhich element you want to delete?";
			cin>>data2;
			q=list;
			while(q->data!=data2 && q->next!=NULL)
			{
				r=q;
				q=q->next;
			}
			if(q->data==data2)
			{
				r->next=q->next;
				free(q);
			}
			else
			{
				cout<<"\nElement is not found";
			}
		}
	}











































void insertaap()
{
	if(list==NULL)
	{
		cout<<"\nCannot insert new value";
	}
	else
	{
		p=(struct node*)malloc(sizeof(node));
		cout<<endl<<"enter data"<<endl;
 		cin>>data1;
		p->data=data1;
		cout<<"\nEnter data after which you want insert new value";
		cin>>data2;
		q=list;
		while(q->data!=data2 && q->next!=NULL)
		{
			q=q->next;

		}
		if(q->data==data2)
		{
			r=q->next;
			q->next=p;
			p->next=r;
		}
		else
		{
			cout<<"\nData not found";
		}

	}
}











void insertbap()
{
	if(list==NULL)
	{
		cout<<"\nCannot insert new value";
	}
	else
	{
		p=(struct node*)malloc(sizeof(node));
		cout<<endl<<"enter data"<<endl;
 		cin>>data1;
		p->data=data1;
		cout<<"\nEnter data before which you want insert new value";
		cin>>data2;

		q=list;
		while(q->data!=data2 && q->next!=NULL)
		{
			r=q;
			q=q->next;
		}
		if(q->data==data2)
		{
			r->next=p;
			p->next=q;
		}
		else
		{
			cout<<"\nData not found";
		}

	}
}





























	void inserte()
	{
		if(list==NULL)
		{
			p=(struct node*)malloc(sizeof(node));
			cout<<endl<<"enter data"<<endl;
 			cin>>data1;
			p->data=data1;
			p->next=NULL;
			list=p;
		}
		else
		{
			p=(struct node*)malloc(sizeof(node));
			cout<<endl<<"enter data"<<endl;
 			cin>>data1;
			p->data=data1;
			q=list;
			while(q->next!=NULL)
			{
				q=q->next;
			}
			q->next=p;
			p->next=NULL;

		}
	}





















	void insertb()
	{
		if(list==NULL)
		{
			p=(struct node*)malloc(sizeof(node));
			cout<<endl<<"enter data"<<endl;
 			cin>>data1;
			p->data=data1;
			p->next=NULL;
			list=p;
		}
		else
		{
	        	p=(struct node*)malloc(sizeof(node));
			cout<<endl<<"enter data"<<endl;
 			cin>>data1;
			p->data=data1;
			p->next=list;
			list=p;
		}
	}
	void display()
	{
		if(list==NULL)
		{
			cout<<endl<<"List is empty :( "<<endl;
		}
		else
		{
			q=list;
			while(q!=NULL)
			{

		cout<< q->data<<"---->";
				q=q->next;
			}
		}
	}
};

int main()
{
	linked l;
	l.menu();
	return 0;
}
