#include<iostream>
using namespace std;
void max_min(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        

        
    }
    cout<<"max element in array "<<max<<endl;
        cout<<"min element in array "<<min<<endl;
    
}
int main(){
    int n;
    cout<<"enter the size element ";
    cin>>n;
    int arr[n];
    max_min(arr,n);
    return 0;
}