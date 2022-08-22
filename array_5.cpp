#include<iostream>
using namespace std;
void odd_even(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            cout<<arr[i]<<" is even "<<endl;
        }
        else
        cout<<arr[i]<<" is odd "<<endl;
        
    }
    
}
int main(){
    int n;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    odd_even(arr,n);
    return 0;
}