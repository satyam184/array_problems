#include<iostream>
using namespace std;
void copy(int arr[],int arr1[],int n)
{
    cout<<"enter the first array element ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr1[i]=arr[i];
    }
    cout<<"second array elemnts are ";

    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<"\t";
    }
    
    
    

}
int main()
{
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    int arr[n];
    int arr1[n] ;
    copy(arr,arr1,n);
    return 0;
}