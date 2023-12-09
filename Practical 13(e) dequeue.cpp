#include<iostream>
using namespace std;
#define max 5

class dqueue

{
    private:
        int dq[max];
        int front,rear;
    public:
        dqueue()
        {
            front = rear =-1;
        }
        void enqueueFront();
        void enqueueRear();
        void dequeueFront();
        void dequeueRear();
        void display();
        void getFront();
        void getRear();
};

void dqueue::enqueueFront()
{
    int ele;
    cout<<"enter the element ";
    cin>>ele;
    if((front==0 && rear==max-1)||(front == rear+1))
    {
        cout<<"Queue is full";
    }
    else if(front==-1&& rear == -1)
    {
        front= rear = 0;
        dq[front]=ele;
    }
    else if(front==0)
    {
        front = max-1;
        dq[front]=ele;
    }
    else
    {
        front = front-1;
        dq[front]=ele;

    }
}

void dqueue::enqueueRear()
{
    int ele;
    cout<<"enter the element ";
    cin>>ele;
    if((front==0 && rear==max-1)||(front ==rear+1))
    {
        cout<<"Queue is full";
    }
    else if( rear==-1 && rear== -1)
    {
        rear=front = 0;
        dq[rear]=ele;
    }
    else if(rear==max-1)
    {
        rear =0;
        dq[rear]=ele;
    }
    else
    {
        rear++;
        dq[rear]=ele;
    }

} 
void dqueue::dequeueFront()
{
    if(front ==-1 && rear ==-1)
    {
        cout<<"Queue is Empty";
    }
    else if(front==max-1)
    {
        cout<<"Deleted element is : "<<dq[front];
        front=0;
    }
    else if(front==rear)
    {
        front =rear = -1;
    }
    else
    {
        cout<<"Deleted element is : "<<dq[front];
        front++;

    }
}
void dqueue::dequeueRear()
{
    if(front ==-1 && rear ==-1)
    {
        cout<<"Queue is Empty";
    }
    else if(rear==0)
    {
        cout<<"Deleted element is : "<<dq[rear];
        rear=max-1;
    }
    else if(front==rear)
    {
        front=rear=-1;

    }
    else
    {
        cout<<"Deleted element is : "<<dq[rear];
        rear--;

    }
} 

void dqueue::getFront()
{
    cout<<"Element at front is :"<<dq[front];
}

void dqueue::getRear()
{
    cout<<"Element at rear is :"<<dq[rear];
}

void dqueue::display()

{
    int i= front;
    cout<<"Elements of queue:";
    while(i!=rear)
    {
        cout<<" "<<dq[i];
        i=(i+1)%max;
    }
    cout<<" "<<dq[i];
}

int main()
{
    dqueue dq;
     int ch;
    do
    {
        cout<<"\n1.To insert element from Front";
        cout<<"\n2.To insert element from Rear";
        cout<<"\n3.To delete element from Front";
        cout<<"\n4.To delete element from Rear";
        cout<<"\n5.To display element of queue";
        cout<<"\n6.To find element at front";
        cout<<"\n7.To find element at Rear ";
        cout<<"\n8.Exit";
        cout<<"\nEnter your choice :-";
        cin>>ch;

        switch (ch)
        {
        case 1: dq.enqueueFront();
            break;

         case 2: dq.enqueueRear();
                break; 
        
        case 3: dq.dequeueFront();
                break;
        
         case 4: dq.dequeueRear();
                break; 
        
        case 5: dq.display();
                break;

        case 6: dq.getFront();
                break;

        case 7: dq.getRear();
                break;

        default: 
                cout<<"Invalid Choice";
                break;
        }

    } while (ch!=8);
     
     return 0;
}