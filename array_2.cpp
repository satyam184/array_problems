#include<iostream>
using namespace std;
void input_elements(int arr[],int num)
{
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
}
void neagtive_elements(int arr[],int num)
{
    int count=0;
    cout<<"negative elements are: "<<endl;
    for(int i=0;i<num;i++)
    {
        if(arr[i]<0)
        {
            cout<<arr[i];
           
            count++;
            
        }

    }

     cout<<endl<<"total negative elements are "<<count<<endl;
}
int main()
{
    cout<<"enter the size of the array ";
    int num;
    cin>>num;
    int arr[num] ;
    input_elements(arr,num);
    neagtive_elements(arr,num);
    return 0;
}