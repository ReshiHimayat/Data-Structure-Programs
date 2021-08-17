#include<iostream>

using namespace std;

int main()
{
    int arr[5];
    //Inserting the inserts into array
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the element at location " <<i+1<<endl;
        cin>> arr[i];
    }
    //displaying array elements
    for(int i=0;i<5;i++)
    {
        cout<< " Element at Location" << i+1<<" is " << arr[i]<<endl;
    }
    return 0;
}
