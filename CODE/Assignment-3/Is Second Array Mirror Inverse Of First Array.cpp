#include<iostream>
using namespace std;

int main() {

    int num;
    cin>>num;
    
    int arr[num], a2[num];
    for (int i=0; i<num; i++)
        cin>>arr[i];
    for (int i=0; i<num; i++)
        cin>>a2[i];
        
    int i=0;
    while (i<num) {
        if(arr[a2[i]]!=i)
        {
            cout<<"false";
            break;
        }
        i++;
    }
     if (i==num)
        cout<<"true";
        
	return 0;
}
