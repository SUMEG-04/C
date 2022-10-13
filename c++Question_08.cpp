//Create Matrix class. Write a menu-driven program to perform following Matrix operations: 
//a) Sum 
//b) Product 
//c) Transpose 

#include<iostream>
using namespace std;

void sum(){
	
	
}

int main(){
	
	cout<<"\n\t\t\t\tWELCOME PROGRAMER\n"
	        <<"\n\t\tThis is menu-driven program to perform certain Matrix operations. ";
	     
	char opt;   
	do{
		cout<<"\n-------------------------------------------------------------------------------------------------------\n"
	        <<"\n\nProgram to perform following Matrix operations."
	        <<"\n\n\t1.Sum."
	        <<"\n\n\t2.Product."
	        <<"\n\n\t3.Transpose.";
	    
	    cout<<"\n\nEnter your choice";
	    cin>>opt;
	    
	    sum();
	    int n,m;
    // an array with 3 rows and 2 columns.
    int x[n][m];
 
    // output each array element's value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cin  >> x[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }
	    
	    switch(opt){
	    	
	    	case '0':
	    		
	    		//
	    		break;
	    	case '1':
	    		sum();
	    		break;
	    	case '2':
	    		break;
	    	case '3':
	    		break;
	    	default:
	    		cout<<"\nInvalid choice.";
		}
	}while(opt!=0);
	        
}
