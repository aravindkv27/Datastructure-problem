#include <iostream>

using namespace std;

int arr[20], top = -1;

void push(int val)
{
    if(top == 19)
        cout<<"Stack is full!";
    else
    {
        top += 1;
        arr[top] = val;
    }
}

void pop()
{
    if(top <= -1)
        cout<<"Stack is empty!\n";
    else
    {
        cout<<"Poped element is: "<<arr[top]<<endl;
        top -= 1;
    }
}

void display()
{
    cout<<"Elements are: ";
    for(int i=0; i<=top; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int val, opt, ans;
    cout<<" STACKS \n";
    cout<<"1. Push.\n";
    cout<<"2. Pop.\n";
    cout<<"3. Display.\n";
    
    do
    {
        cout<<"Enter your choice: ";
        cin>>opt;
        switch(opt)
        {
            case 1: cout<<"Enter the value: ";
                    cin>>val;
                    push(val);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: cout<<"Error!";
        }
        
    }while(ans !=4 );
    
    return 0;
}
