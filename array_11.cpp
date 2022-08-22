#include<iostream>
using namespace std;

void frequency(int arr[],int n,int temp[])
{
    cout<<"enter the elements:  ";
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
            temp[j]=0;
            cnt++;
        }
        
       }
       if (temp[i]!=0)
       {
        temp[i]=cnt;
       }
    }   
       for (int i = 0; i < n; i++)
       {
        
            if(temp[i]!=0)
            cout<<arr[i]<<" occurs "<<temp[i]<<endl;
        
        
       }
       
       
       
    }
    
    

int main()
{
    int n;
   cout<< "enter the size of the array:  ";
   cin>>n;
   int arr[n];
   int temp[n];
   frequency(arr,n,temp);
}