#include<iostream>
using namespace std;
int main(){
	int i,j,temp;
	int arr[5]={345,673,89,11,3};
	//bubble sort algo
	for(i=0;i<5;i++){
		for(j=0;j<5-i;j++){
			if(arr[j]>arr[j+1]){
			 temp=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=temp;	
			}
		}
	}
	
	cout<<"Sorted Array:\n";
	for(j=0;j<5;j++){
		cout<<arr[j]<<"\n";
	}
	system("pause");
	return 0;
}
