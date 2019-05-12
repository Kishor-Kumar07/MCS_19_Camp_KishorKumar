
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*head=NULL;
void pushb()
{
    int x;
    cout<<"enter the data:";cin>>x;
    struct node *n=new node;
    n->data=x;
    if(head==NULL)
    {
        head=n;
    }
    else
    {
        n->next=head;
        head=n;
    }
}
void pushe()
{
  int x;
    cout<<"enter the data:";cin>>x;
    struct node *n=new node;
    struct node *temp=new node;
    temp=head;
    n->data=x;
    if(head==NULL)
    {
        head=n;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
}
void popb()
{
    int x;
    struct node *n=new node;
    struct node *temp=new node;
    temp=head;
    
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
        x=temp->data;
        head=temp->next;
        free(temp);
        cout<<x<<"is deleted";
    }
}
void pope()
{
    int x;
    struct node *n=new node;
    struct node *temp=new node;
    temp=head;
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
       while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        x=temp->data;
        cout<<x<<"is deleted";
    }
}
void print()
{
    int count=0;
    if(head==NULL)
    {
        cout<<"list is empty";
        cout<<"length is:"<<count;
    }
    else
    {
         struct node *temp=new node;
         temp=head;
         while(temp!=NULL)
         {
             count++;
             cout<<temp->data;
             temp=temp->next;
         }
         cout<<"length is:"<<count;
    }
}
void del()
{
     struct node *temp=new node;
         struct node *pre=new node;
         temp=head;
         while(temp!=NULL)
         {
             pre=temp;
             temp=temp->next;
             free(pre);
         }
}
void search()
{
    int k,count=0;
    cout<<"enter element to b searched:";
    cin>>k;
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
        struct node *temp=new node;
         temp=head;
         while(temp!=NULL)
         {
             if(temp->data==k)
             {
                 count++;
             }
             temp=temp->next;
         }
         if(count==0)
         {
             cout<<"element not found";
         }
         else
         {
             cout<<"element found";
         }
    }
}
void ele()
{
    int n,count=0;
    cout<<"enter the position:";cin>>n;
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
        struct node *temp=new node;
         temp=head;
         while(temp!=NULL)
         {
            if(count==n)
            {
                cout<<temp->data;
            }
             temp=temp->next;
            count++;
         }
    }     
}
void pushp()
{
    int x,k,count=0;
    cout<<"enter the data:";cin>>x;
    cout<<"enter position:";cin>>k;
    struct node *n=new node;
    struct node *temp=new node;
    temp=head;
    n->data=x;
    if(head==NULL)
    {
        head=n;
    }
    else
    {
        while(temp->next!=NULL)
        {
            if((count+1)==k)
            {
                n->next=temp->next;
                temp->next=n;
            }
            temp=temp->next;
            count++;
        }
    }
}
void popp()
{
    int x,k,count=0;
    cout<<"enter position:";cin>>k;
    struct node *n=new node;
    struct node *temp=new node;
    temp=head;
    temp->next=n;
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
        while(temp->next!=NULL)
        {
            if((count)==k&&count==0)
            {
                head=temp->next;
                free(temp);
            }
            else if((count+1)==k)
            {
                temp->next=n->next;
                x=n->data;
                free(n);
                cout<<x<<"is deleted";
            }
            temp=temp->next;
            n=n->next;
            count++;
        }
    }
}
int main()
{
  int a,ch;
  cout<<"1.insertbegin\n2.insertend\n3.insertpos\n4.deletebegin\n5.deleteend\n6.deletepos\n7.print\n8.deletelist\n9.search\n0.eleatnode\n";
  do{
  cin>>a;
  switch(a)
  {
   case 1:pushb();
          break;
   case 2:pushe();
          break;
   case 3:pushp();
          break;
    case 4:popb();
          break;
    case 5:pope();
          break;
    case 6:popp();
          break;
    case 7:print();
          break;
    case 8:del();
          break; 
    case 9:search();
           break;
    case 0:ele();
          break;       
  }
  cout<<"enter choice(1 to continue)";
  cin>>ch;
  }while(ch==1);
    return 0;
}
