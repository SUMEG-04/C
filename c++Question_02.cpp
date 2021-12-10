//Program to remove the duplicate value in an array

#include<iostream>
using namespace std;

void remove_dup(int a, int arr[]){
	
	  
	int ar[a];
	
	/*int j=0;
	for(int i=0;i<a-1;i++){
		if(arr[i]!=arr[i+1])
		    ar[j++]=arr[i];
	}
	
	ar[j++]=arr[a-1];
	*/
	bool n=true;
	int index=0;
	
	for(int i=0;i<a-1;i++){
		
		for(int j=i+1;j<a;j++){
			
			 if(arr[i]==arr[j]){
			 	n=false;
			 	break;
			 }
			 else{
			 	n=true;
			 }
		}
		if(n){
			ar[index]=arr[i];
			index+=1;
		}
	}
	
	ar[index]=arr[a-1];
	cout<<"\n\nYour array after removal of duplicate values: [";
	
	for(int i=0;i<=index;i++){
		
		cout<<ar[i]<<" ";
	}
	cout<<"]\n";
}
int main(){
	
	int a;
	
	cout<<"\n\t\t\tWELCOME PROGRAMER\n"
	    <<"\tThis program is to remove the duplicate value in an array\n"
	    <<"-----------------------------------------------------------------------------------------"
	    <<"\n\nWhat length do you want to give to your array: ";
	cin>>a;
	
	cout<<"\n\tNow feed the elements in your array:\n";
	int arr[a];
	for(int i=0;i<a;i++){
		
		cout<<"\tEnter element "<<i+1<<" :";
		cin>>arr[i];
	}
	 
	 cout<<"\nYour created array is: [";
	for(int i=0;i<a;i++){
		
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	
	remove_dup(a,arr);
	
}
