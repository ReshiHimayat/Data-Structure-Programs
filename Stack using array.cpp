#include<iostream>

# define N 5
int stack[N];
int top=-1;

using namespace std;

void push()
{
    int x=0;
    cout<<"Enter data"<<endl;
    cin>> x;
    if(top==N-1)
    {
        cout<<"Stack overflow"<<endl;
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item=0;
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        item= stack[top];
        top--;
        cout<<"The popped item is"<< item <<endl;
    }
}
void peek()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Top most element in stack is" <<stack[top]<<endl;
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--
    )
    {
        cout<< stack[i] <<endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout<< " Enter Choice "<<endl<<"1:Push"<<endl<<"2:Pop"<<endl<<"3: Peek"<<endl<<"4: Display"<<endl<<"0:Exit"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            cout<< "Invalid option"<<endl;

        }

    }while(choice!=0);
}
