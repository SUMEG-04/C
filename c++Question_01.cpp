//Program to compute the sum of the first n terms of the following series:
//S=1-1/(2*2)+1/(3/3)-...1/(n*n)

#include<iostream>
using namespace std;

//function to convert String argument into integer
int string_to_int(char* str){
	
	int x,i;
	for(x=0,i=0;str[i];i++){
		
		if(str[i]>='0'&&str[i]<='9'){
			x=x*10+(str[i]-48);
		}
		else
		    break;
	}
	return x;
}
int main(int argc,char* argv[]){
	
	float n;
	float S=0;
	
	cout<<"\nProgram to compute the sum of the first n terms of the following series:"
	    <<"S=1-1/(2*2)+1/(3*3)-...1/(n*n)";
	    
	    if(argc==1){
	    	cout<<"\n\nEnter the value of 'n' for above series: ";
	        cin>>n;  //Taking input
		}
		else{
			n=string_to_int(argv[1]);
			cout<<n;
		}
	    
	
	
	// loop for computing series.
	for(int i=1;i<=n;i++){
		
		if(i%2==0){
			S=S-1.0/(i*i);
			
			
		}
		else{
			
			S=S+1.0/(i*i);
			
		}
	}
	
	cout<<"\nThe value of S is:"<<S;
}
