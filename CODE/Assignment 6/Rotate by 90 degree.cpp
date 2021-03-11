#include<stdio.h>
#include<iostream> 
#include<algorithm> 
#include<vector>
using namespace std; 

int main() {
	int i,N;cin>>N;
	int arr[N][N];
 
 //input
	for(i=0;i<N;i++)
		for(int j=0;j<N;j++)
			cin>>arr[i][j];
   
 //reverse without std::lib 
	for(int row=0;row<N;row++){
		int start_col = 0;
		int end_col = N-1;
		while(start_col<end_col){
			swap(arr[row][start_col],arr[row][end_col]);
			start_col++;
			end_col--;
		}
	}
	//transpose of matrix
	for(i=0;i<N;i++)
        for(int j=0;j<N;j++)
		if(i<j){
            swap(arr[i][j], arr[j][i]);
		}
  
	//print
	for(i=0;i<N;i++){  
		for(int j=0;j<N;j++){
			cout<<arr[i][j]<< " ";	
		}
		cout<<endl;	
	}		
		return 0;
}
