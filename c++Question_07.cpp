//Write a program to calculate GCD of two numbers (i) with recursion (ii) without recursion

#include<iostream>
using namespace std;

//function to calc GDC with recursion

int rec_GDC_calc(int n,int m,int i,int x){
	
	if(i==n||i==m){
		return x;
	}
	else{
		if(n%i==0 && m%i==0){
			x=x*i;
			n=n/i;
			m=m/i;
		}
		else
		    i=i+1;
		return rec_GDC_calc(n,m,i,x);
	}
}

//Function to clac GDC without recursion

int GDC_calc(int n,int m){
	int x=1;
	int i=2;
	while(i!=m){
		
		if(n%i==0 && m%i==0){
			x=x*i;
			n=n/i;
			m=m/i;
		}
		else
		    i=i+1;	
	}
	return x;
}
int main(){
	
	cout<<"\n\t\t\t\tWELCOME PROGRAMER\n"
	        <<"\n\t\tThis a program to calculate GCD of two numbers. "
	        <<"\n-------------------------------------------------------------------------------------------------------\n";
	cout<<"\n\nCalculate GCD of two numbers."
	    <<"\n\n\t1.with recursion."
	    <<"\n\n\t2.without recursion.";
	int opt;
	cout<<"\n\nEnter your choice:";
	cin>>opt;
	int n=130,m=60;
	if(opt==1){
		
		//calc GDC with recursion
		if(n>=1&&m>=1){
			int a=rec_GDC_calc(n,m,2,1);
		    cout<<"\nGDC of '"<<n<<"','"<<m<<"' is :"<<a;
		}
		else
		    cout<<"\nNumber is -ve.";
	}
	else if(opt==2){
		
		//calc GDC without recursion
		if(n>=1&&m>=1){
			int a=GDC_calc(n,m);		
		    cout<<"\nGDC of '"<<n<<"','"<<m<<"' is :"<<a;
		}
		else{
			cout<<"\nEntered number is -ve.";
		}
	}
	else{
		
		cout<<"\nInvalid choice";
	}
	
	return 0;
	
}
