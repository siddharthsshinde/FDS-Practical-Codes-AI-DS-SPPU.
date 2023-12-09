
#include <iostream>

using namespace std;

struct node
{
    int prn;
    string name;
    node *next;
};

class linked_list
{
node *s=NULL,*head=NULL,*temp=NULL,*head1=NULL,*head2=NULL,*temp1=NULL,*temp2=NULL;
        int ct;
        char a[20];
public:
    linked_list()
    {
        head = NULL;
        
    }
    node* create();
    void insertm();
    void insertp();
    void inserts();
    void delp();
    void delm();
    void dels();
    void display();
    void count();
    void concat();
    

    
};

node* linked_list::create()
{
     node *p=new node;
     cout<<"Enter name of student: ";
     cin>>p->name;
     cout<<"\nEnter prn no. of student:";
     cin>>p->prn;
     p->next=NULL;
     return  p;
}
void linked_list::insertp()
{ 
       node *p=create();
       if(head==NULL)
       {    head=p;
       }
       else
       {    temp=head;
            head=p;
            head->next=temp->next;
       }        
}
void linked_list::insertm()
{ 
     node *p=create();
     if(head==NULL)
     {    
         head=p;
     }
    else
    {     temp=head;
          while(temp->next!=NULL)
          {    
              temp=temp->next;   
              
          }
          temp->next=p;
     }        
         
}  

void linked_list::inserts()
{
        node *p=create();
        if(head == NULL)
        {
            head = p;
        }
        else{
            temp  = head;
            while (temp->next!=NULL)
            {
                temp = temp->next;
               
            }
             temp->next =p;
        }
}
void linked_list::delp()
{

 
    temp = head;
    head = head->next;
 
    delete(temp);
 
    
}
void linked_list::delm()
  {   int prnno,f=0; 
      cout<<"\n enter the prn no. of student whose data you want to delete";
      cin>>prnno;
      temp=head;
      while(temp->next!=NULL)
      {  
           if(temp->prn==prnno)
            {           
                s->next=temp->next;
                delete(temp);        
                f=1;
            }
            s=temp;
            temp=temp->next;
       }      
       if(f==0)
        {  
            cout<<"\n sorry memeber not deleted ";  
        }
   }
void linked_list::dels()
{
    temp=head;
    while (temp->next!=NULL)
    {
        s=temp;
        temp = temp->next;
    }
    s->next=NULL;
    delete(temp);
    
}



void linked_list::display()
{
       
        temp = head;
        while (temp != NULL)
        {
            cout << temp->prn << endl;
            cout << temp->name << endl;

            temp = temp->next;
        }
}
void linked_list::count()
{
    ct = 0;
    if(head==NULL)
    {
        cout<<"List is empty"<< endl;
    }
    else
    {
        temp = head;
        while(temp!=NULL)
        {
            ct++;
            temp = temp->next;
        }
        
    }
    cout<<"Total no of members :"<< ct <<endl;
}
void linked_list::concat()
    {   int k,j,i;
        cout<<"enter no. of members in list1: ";
        cin>>k;
        head=NULL;
        for(i=0;i<k;i++)
        { 
            insertm();
            head1=head;
        } 
        head=NULL;
        cout<<"enter no. of members in list2: ";
        cin>>j;
        for(i=0;i<j;i++)
        { 
            insertm();
            head2=head;
        } 
        head=NULL;
        temp1=head1;
        while(temp1->next!=NULL)
        {   
          temp1=temp1->next;   
        }
        temp1->next=head2;
        temp2=head1;                
        cout<<"     prn     Name  \n";
        while(temp2->next!=NULL)
        { 
            cout<<"\n    "<<temp2->prn<<"   "<<temp2->name<<"\n";
            temp2=temp2->next;
        }
        cout<<"\n    "<<temp2->prn<<"      "<<temp2->name<<"\n";
     }   


  
int main()
{
    linked_list a;
    int i;
   
          char ch;
       do{
          cout<<"\n  1. To insert president   ";
          cout<<"\n  2. To insert member   ";
          cout<<"\n  3. To insert secretary ";
          cout<<"\n  4. To delete president   ";
          cout<<"\n  5. To delete member  ";
          cout<<"\n  6. To delete secretary ";
          cout<<"\n  7. To display data   ";
          cout<<"\n  8. Count of members";
          cout<<"\n  9.To concatenate two strings ";
          cout<<"\n  Enter the choice: ";
          cin>>i;

         switch(i)
         {      case 1: a.insertp();
                        break;
                 
                case 2: a.insertm();
                        break;

                case 3: a.inserts();
                        break;

                case 4: a.delp();
                        break;

                case 5: a.delm();
                        break;

                case 6: a.dels();
                        break;
                
                case 7: a.display();
                        break;

                case 8: a.count();
                        break;
                case 9: a.concat();
                        break;
                

                default: cout<<"\n unknown choice";

          }
            cout<<"\n do you want to continue enter y/Y: ";
            cin>>ch;
       

       }while(ch=='y'||ch=='Y');                                                                                                   
                     
   return 0;
}

