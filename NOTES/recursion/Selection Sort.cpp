// not executing properly 

#include<iostream>
using namespace std; 

int FindMin(int *a,int n, int i){
    int min = i;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }   
    return min;
}

void selectionsort(int *a,int n,int i){
    // base case 
    if(i==n-1){
        return;
    } 

    // recursive case 
    if(i!=FindMin(a,n,i)){
        swap(a[i],a[min]);
    }
    selectionsort(a,n,i+1);
}

void print(int *a, int n){
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a[] = {4,3,2,1};
    int n = sizeof(a)/sizeof(int);
    print(a,n);
    selectionsort(a,n);
}