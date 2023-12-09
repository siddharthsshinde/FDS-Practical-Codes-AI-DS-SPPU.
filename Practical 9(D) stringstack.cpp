#include<iostream>
#include<string.h>
#define max 50
using namespace std;

class STACK
{
	private:
		char stackstring[max];
		int top;
	
	public:
		STACK()
		{
			top=-1;	
		}	
		
		void push(char);
		void reverse();	
		void convert(char[]);
		void palindrome();
};

void STACK::push(char c)
{
	top++;
	stackstring[top] = c;
	stackstring[top+1]='\0';
	
	cout<<endl<<c<<" is pushed on stack ...";
}

void STACK::reverse()
{
	cout<<"\nReverse String is :";
     for(int i=strlen(stackstring)-1; i>=0; i--)
        cout<<stackstring[i];
    cout<<"\n"<<endl;
}


void STACK::convert(char str[])
{
	int j,k,len = strlen(str);

	for(j=0, k=0; j<len; j++)
	{
	
        if(isalpha(str[j]))
        {
            str[k]=tolower(str[j]);
            k++;
        }
	}
	str[k]='\0';

	cout<<endl<<"Converted String : "<<str<<"\n";
}

void STACK::palindrome()
{	
	char str[max];
	int i,j;	
   

	for(i=top,j=0; i>=0; i--,j++)
	{
		str[j]=stackstring[i];
	}
	str[j]='\0';
	
	
	if(strcmp(str,stackstring) == 0)
		cout<<"\nString is palindrome...";
	else
		cout<<"\nString is not palindrome...";
}


int main()
{
	STACK stack;

	char str[max];
	int i=0;
	
	cout<<"\nEnter string to be reversed and check is it palindrome or not : \n\n";
	
	cin.getline(str , 50);
	
	stack.convert(str);
	
	while(str[i] != '\0')
	{
		stack.push(str[i]);
		i++;
	}

	stack.reverse();
	stack.palindrome();

	
}