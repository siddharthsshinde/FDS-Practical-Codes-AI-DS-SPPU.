
#include<iostream>
using namespace std;
#define max 5

class pizza
{
    private:
       int pizzaparlar[max];
       int front ,rear;
    public:
        pizza()
        {
            front = rear =-1;
        }
        void acceptOrder(int);//enqueue operation
        void makePayment(int);//dequeue operation
        void display();
};

void pizza::acceptOrder(int item)
{
    
  
     if((rear+1)%max == front)
    {
        cout<<"Can't take order.Please waite for some time";
    }
    else if(front == -1 && rear == -1)
    {
        front = rear =0;
        pizzaparlar[rear] = item;
    }
    else
    {
        rear = (rear+1)%max;
        pizzaparlar[rear] = item;

    }
}

void pizza::makePayment(int n)
{
    if(front == -1 && rear == -1)
    {
        cout<<"No Pizza order yet placed";
    }
    else if(front == rear)
    {
        front =rear =-1;
    }
    else
    {
        cout<<"Payment received for order no :"<<front;
        front = (front+1)%max;

    }

}

void pizza::display()
{
    int i =front;
    cout<<"Pizza oreders are :";
    while (i!=rear)
    {
        cout<<pizzaparlar[i];
        i=(i+1)%max;
    }
     cout<<pizzaparlar[i];
}


int main()
{
    pizza p;
    int ch,k,n;
    do
    { 
        cout<<"\n**********WELCOME TO PIZZA PARLOR************";
        cout<<"\n 1.Place pizza order";
        cout<<"\n 2.Make payment";
        cout<<"\n 3.Pending orders";
        cout<<"\n 4.To exit";
        cout<<"\n Enter your choice";

        cin>>ch;
        switch (ch)
        {
        case 1: cout<<"\nWhich Pizza do u like most....\n";
                cout<<"\n1.Veg Soya Pizza\n2.Veg Panner cheese Pizza\n3.Cheese burst Pizza";
                cout<<"\nPlease enter u r order: ";
                cin>>k;
                p.acceptOrder(k);
                break;
        case 2:p.makePayment(n);
                break;
        case 3: p.display();
                break;
        default:
                cout<<"Invalid choice";
                break;
        }

    } while (ch!=4);
    return 0;
    
}