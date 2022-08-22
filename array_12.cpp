#include<iostream>
using namespace std;
void delete_duplicate(int arr[],int n)
{
    cout<<"enter the elemnts: ";
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                for (int k = j; k < n; k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
                
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
int main()
{
    int n;
    cout<<"enter the size of the array:  ";
    cin>>n;
    int arr[n];
    delete_duplicate(arr,n);
}