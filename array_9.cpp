#include<iostream>
using namespace std;
void ascending_order(int arr[],int n)
{
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    
    
    

}
int main()
{
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
   int  arr[n];
   ascending_order(arr,n);
   return 0;

}