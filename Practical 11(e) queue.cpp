#include<iostream>
using namespace std;
#define max 5
class queue
{
    private:
        int front,rear;
        int data[max];
    public:
     queue()
     {
        front=-1;
        rear=-1;
     }
     void enqueue(int x);
     void dequeue();
     void display();
};

void queue::enqueue(int x)
{
    if(rear == max-1)
    {
        cout<<"Queue is overflow";
    }
    else if(front== -1 && rear==-1)
    {
        front=0;
        rear =0;
        data[rear]=x;
    }
    else
    {
        rear++;
        data[rear]=x;
    }
}

void queue::dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is empty";
    }
    else if (front==rear)
    {
        front=rear = -1;
    }
    else
    {
        cout<<"Deleted elemnt is :"<<data[front];
        front++;

    }
}
void queue::display()
{
    int i;
    if(front== -1 && rear==-1)
    {
        cout<<"Queue is empty";
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            cout<<" "<<data[i];
        }

    }
}

int main()
{
    queue q;
    int ch,i,data;
    do
    {
        cout<<"\n1.To insert element in queue.";
        cout<<"\n2.To delete element from queue.";
        cout<<"\n3.To display element of queue.";
        cout<<"\n4.To exit";
        cout<<"\nEnter your choice";
        cin>>ch;
        switch (ch)
        {
            case 1: cout<<"Enter the elemtnt";
                    cin>> data;
                    q.enqueue(data);
                    break;

            case 2: q.dequeue();
                    break;

            case 3: q.display();
                    break;
        
            default:
                    cout<<"Invalid Choice";
                    break;
        }
        
    } while (i!=4);
    
}