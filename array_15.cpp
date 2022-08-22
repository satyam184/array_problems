#include<iostream>
using namespace std;
void odd_even(int arr[],int even[],int odd[],int n)
{
    cout<<"enter the elemnts: ";
    int j=0;
    int k=0;
    for (int  i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        }
        
    }
    cout<<"even elements are :\n" ; 
    for (int i = 0; i < j; i++)
    {
        cout<<even[i]<<"     ";
    }
        cout<<"\nodd elements are :\n" ; 

    for (int i = 0; i < k; i++)
    {
        cout<<odd[i]<<"     ";
    }
    
    

    
    
}
int main()
{
    int n,j,k;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    int even[n];
    int odd[n];
    odd_even(arr,even,odd,n);
}