#include<iostream>
using namespace std;
void merge(int arr1[], int arr2[],int res[],int n1,int n2,int n3)
{
    int i=0;
    int j=0;
    int k=0;
    cout<<"enter the 1st array elements: "<<endl;
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the 2nd array elemnts:  "<<endl;
    for (int j = 0; j < n2; j++)
    {
       cin>>arr2[j];
    }
    while ( i <n1 && j<n2)
    {
        if (arr1[i]<arr2[j])
        {
            res[k]=arr1[i];
            i++;
            k++;
        }
        else
        {res[k]=arr2[j];
        j++;
        k++;}
        
    }
    while (i<n1)
    {
        res[k]=arr1[i];
            i++;
            k++;
    }
    while (j<n2)
    {
        res[k]=arr2[j];
        j++;
        k++;
    }
    cout<<"merge array: "<<endl;

    for (int i = 0; i < n3; i++)
    {
        cout<<res[i]<<endl;
    }
    
}
int main()
{
    int n1;
    cout<<"enter the size of 1st array elements: ";
    cin>>n1;
    int arr1[n1];

    int n2;
    cout<<"enter the size of 2nd array elements:  ";
    cin>>n2;
    int arr2[n2];

    int n3=n1+n2;
    int res[n3];
    merge(arr1,arr2,res,n1,n2,n3);

    

}