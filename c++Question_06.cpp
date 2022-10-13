//Write a program to search a given element in a set of N numbers using Binary search 
//(i) with recursion (ii) without recursion.

#include<iostream>
using namespace std;

//function for binary search with recursion

int bin_search(int arr[],int l,int r,int x){
    
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 
        if (arr[mid] > x)
            return bin_search(arr, l, mid - 1, x);
 
        return bin_search(arr, mid + 1, r, x);
    }
 
    return -1;
}

//function for binary search without recursion

int binarysearch(int arr[],int l,int r,int x){
    
    while (l <= r)
  {
    int m = l + (r-l)/2;
  
    
    if (arr[m] == x) 
        return m;  
  
    
    if (arr[m] < x) 
        l = m + 1; 
  
    
    else 
         r = m - 1; 
  }
  return -1;
}

//Driver code

int main(){
    
    cout<<"\n\t\t\t\tWELCOME PROGRAMER\n"
	        <<"\nThis program  is to search a given element in a set of N numbers using Binary search . "
	        <<"\n-------------------------------------------------------------------------------------------------------\n";
	
	cout<<"\nsearch a given element in a set of N numbers using Binary search."
	    <<"\n\n\t1.with recursion."
	    <<"\n\n\t2.without recursion.";
    
    int opt;
    cout<<"\n\nEnter Your choice: ";
    cin>>opt;
    
    int arr[]={2,7,9,12,23,33,46,51};
    
    int x=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"\nYour set is :[";
	for(int i=0;i<x;i++){
		cout<<arr[i]<<";";
	}
	cout<<"]";
	
	
	if(opt==1){
	    
	    
		//n=1 we will search element with recursion
		//create a calling function
		
	    int k;
	    cout<<"\nEnter number to be search: ";
	    cin>>k;
	    
	    int a=bin_search(arr,0,x-1,k);
	    if(a==-1)
	       cout<<"\nNumber not found."<<endl;
	    else
	       cout<<"\nNumber found at index:"<<a<<endl;
	}
	else if(opt==2){
	    
	    //n=2 we will search it without recursion
	    
	    int k;
	    cout<<"\nEnter number to be search: ";
	    cin>>k;
	    
	    int a=binarysearch(arr,0,x-1,k);
	    if(a==-1)
	       cout<<"\nNumber not found."<<endl;
	    else
	       cout<<"\nNumber found at index:"<<a<<endl;
	}
	else{
	    
	    cout<<"\nInvalid choice.";
	}
	
    return 0;
    
}