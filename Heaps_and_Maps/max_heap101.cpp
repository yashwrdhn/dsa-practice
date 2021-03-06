#include<bits/stdc++.h>
// #include<conio.h>

using namespace std;

void show(vector<int> arr, int n){

	for( auto itr = arr.begin()+1; itr != arr.end(); ++itr){
		cout<<*itr<<" ";
	}
	cout<<endl;
}

void max_heapify(vector<int> &arr,int i,int N){
	
	int left = i*2;
	int right = i*2 +1;
	int largest = i;

	if( left <= N && arr[i] < arr[left]){
		largest = left;
	} 

	if( right <= N && arr[right] > arr[largest]){
		largest = right;
	}

	if(i != largest){
		swap(arr[i],arr[largest]);
		max_heapify(arr, largest, N);
	}
}


int main(){

	//index 0 excluded, all operation starting from index 1
	
	vector<int> arr = {-1,1,4,3,7,8,9,10};
	int n = arr.size();
	

	for( int i = n/2; i > 0; --i){
		max_heapify(arr, i, n);
		show(arr,n);
	}
	
	// getch();
	return 0;
}