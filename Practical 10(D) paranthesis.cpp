#include<iostream>
#include<string.h>
using namespace std;

class paranthesis
{    
    char st[20];
    int top;
    public:
     void push(char a);
     void pop();
     void input();
   
};
void paranthesis::push(char a)
{      
    top++;   
    st[top]=a;               
}
void paranthesis::pop()
{       
    top--;                       
    
}
void paranthesis::input()
{   char ch[20]; 
    int i=0;
    top=-1;
    cout<<"\nenter the expression";
    cin>>ch;
    while(i<strlen(ch))
    {   
     
        if((ch[i]=='{')||(ch[i]=='[')||(ch[i]=='('))
        {
            push(ch[i]); 

        }
        
            
        if(ch[i]=='}')
        {   
            if(st[top]=='{')
                pop();
            else
            {   
                cout<<"\n matching opening brace '{' is not found";   
                                      
            }
                
        }
        if(ch[i]==']')
        {    
            if(st[top]=='[')
                pop();
            else
            {    
                cout<<"\n matching  brace '[' is not found";
            }
        }
        if(ch[i]==')')
        {    
            if(st[top]=='(')
                pop();
            else
            { 
                cout<<"\n matching opening brace '(' is not found";
                
            } 
        }
            i++;
    }
    if(top==-1)
    {  
           cout<<"\nstack is empty";
           cout<<"\n EXPRESSION IS WELL PARENTHESIZED";
         
    }
    else
    {  while(top!=-1)
        {
            if(st[top]=='[')
            { 
                pop();  
                cout<<"\n matching closing brace ']' is not found";   
            }
            if(st[top]=='{')
            { 
                pop();  
                cout<<"\n matching closing brace '}' is not found";   
            }
            if(st[top]=='(')
            { 
                pop();  
                cout<<"\n matching closing brace ')' is not found";   
            }
        }
           
             cout<<"\n EXPRESSION IS NOT WELL PARENTHESIZED";
    }
  
           
     
}

int main()
{  
    paranthesis  p;
    p.input();
    return 0 ;
     
}  
  
