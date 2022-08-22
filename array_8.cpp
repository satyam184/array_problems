#include<iostream>
using namespace std;
void unique(int arr[],int n,int temp[])
{
    cout<<"enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        temp[i]=-1;
    }
    for (int i = 0; i < n; i++)
    {
        int cnt=1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                cnt++;
                temp[j]=0;
            }
            if (temp[i]!=0)
            {
                temp[i]=cnt;
            }
            
            
        }
        
    }
    cout<<"unique elements: ";
    for (int i = 0; i < n; i++)
    {
        if (temp[i]==1)
        {
            cout<<arr[i]<<",";
           
        }
        
    } 
    
    
    

}
int main()
{
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    int temp[n];
    unique(arr,n,temp);
}