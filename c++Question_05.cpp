//Write a program to merge two ordered arrays to get a single ordered array.

#include<iostream>
using namespace std;


//function for printing array
void print_array(int arr[],int n){
	
	for(int i=0;i<n;i++){
		
		cout<<arr[i];
		if(i!=n-1){
			cout<<";";
		}
	}
	cout<<"]\n";
}


//function for sorting array
void sorting(int arr[],int n){
	
	for(int i=0;i<n;i++){
		int temp;
		
		for(int j=0;j<n-i-1;j++){
			
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

//function for merging array
void merge_array(int arr1[],int arr2[],int n1,int n2){
	
	int arr[n1+n2];
	for(int i=0;i<n1;i++){
		
		arr[i]=arr1[i];
		
	}
	for(int i=n1,j=0;i<n1+n2,j<n2;i++,j++){
		
		arr[i]=arr2[j];
		
	}
	sorting(arr,n1+n2);
	
	cout<<"\nYour array after merging: [";
	print_array(arr,n1+n2);

}


//Driver code
int main(){
	
	
	
	cout<<"\n\t\t\t\tWELCOME PROGRAMER\n"
	        <<"\nThis a program to merge two ordered arrays to get a single ordered array. "
	        <<"\n-------------------------------------------------------------------------------------------------------\n";
	
	
	//Taking size and element for array 1
	cout<<"\nEnter size of array 1: ";
	int n1,n2;
	cin>>n1;
	int arr1[n1];
	
	for(int i=0;i<n1;i++){
		
		cout<<"\nEnter element "<<i+1<<": ";
		cin>>arr1[i];
	}
	
	//Printing array before and after sorting
	cout<<"\nYour array before sorting: [";
	print_array(arr1,n1);
	sorting(arr1,n1);
	cout<<"\nYour array after sorting: [";
	print_array(arr1,n1);
	
	
	//taking size and element for array 2
	cout<<"\nEnter size of array 2: ";
	cin>>n2;
	int arr2[n2];
	
	for(int i=0;i<n2;i++){
		
		cout<<"\nEnter element "<<i+1<<": ";
		cin>>arr2[i];
	}
	
	//printing array before and after sorting
	cout<<"\nYour array before sorting: [";
	print_array(arr2,n2);
	sorting(arr2,n2);
	cout<<"\nYour array after sorting: [";
	print_array(arr2,n2);
	
	//calling function for merging array
	merge_array(arr1,arr2,n1,n2);
	
	return 0;
}
