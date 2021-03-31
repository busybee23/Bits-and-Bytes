#include<iostream>
using namespace std;

int findcand(int arr[], int n)
{
    int count,candidate ;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            candidate = arr[i];
        }
        if(candidate==arr[i])
        { 
            count++;
        }
        else 
        {
            count--;
        }
    }
    return candidate;
}

bool isMajority(int arr[], int size, int can)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==can)
        {
            count++;
        }
    }
    if(count>size/2) 
        return 1;
    else 
        return 0;
}

int main()
{
    int n;cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int can = findcand(arr[],n);
    if(isMajority(arr,n,can)==true)
    {
        cout<<"Majority Element is "<<can<<endl;
    }
    else 
        cout<<"-1";
    
    return 0;

}
