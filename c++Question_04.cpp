//Write a menu driven program to perform following operations on strings (without using 
//inbuilt string functions): 
//a) Show address of each character in string 
//b) Concatenate two strings. 
//c) Compare two strings 
//d) Calculate length of the string (use pointers) 
//e) Convert all lowercase characters to uppercase 
//f) Reverse the string

#include<iostream>
using namespace std;


//Function to count length of string
int str_count(char* n){
	
	char* ptr; // pointer to store address
	ptr=n;
	
	int count=0;
	
	while(*ptr!='\0'){//every char array has \0 at the end
	
	    *ptr++;
	    count+=1;
	}
	return count;
}

//Function to print address of each character
void print_loc(char* str){
	

	int n=str_count(str);//for length of string
	
	
	for(int i=0;i<n;i++){
		
		cout<<"\n\nAddress of '"<<str[i]<<"' is:"<<(void*)str[i];//(void*) for printing address
		
	}
    
}

//Function to concatinating string
void concat_str(){
	
	string s1,s2;
	
	//system("cls");
	cout<<"\n\tConcatenate two strings\n\t-----------------------\n\nEnter string 1: ";
	cin>>s1;
	cout<<"\nEnter string 2: ";
	cin>>s2;
	
	
	string str;
	
	str=s1+s2;
	
	cout<<"\nString 1:"<<s1<<" \tString 2:"<<s2<<"\n\nAfter concatination: '"<<str<<"'";
	
	
}

void comp_str(){
	
	char s1[20],s2[20];
	
	//system("cls");
	cout<<"\n\tCompare two strings\n\t-------------------\n\nEnter string 1: ";
	cin>>s1;
	cout<<"\nEnter string 2: ";
	cin>>s2;
	
	int n1,n2,n3;
	
	n1=str_count(s1);
	n2=str_count(s2);
	
	//Comparing string on basis of length
	//then comparing on basis of alphabetical order
	
	if(n1>n2){
		
		cout<<"\n\nLength of String1 is more than length of String2.";
		
		for(int i=0;i<n2;i++){
			
			if(s1[i]==s2[i]){
				continue;
			}
			
			else if(s1[i]<s2[i]){
				
				cout<<"\n\nAs per alphabetic order '"<<s1<<"' comes before "<<s2<<"'.";
				break;
				
			}
			else{
				
				cout<<"\n\nAs per alphabetic order '"<<s2<<"' comes before "<<s1<<"'.";
				break;
				
			}
			
		}
		
	}
	
	else if(n2>n1){
		
		cout<<"\n\nLength of String1 is less than length of String2.";
		
		for(int i=0;i<n1;i++){
			
			if(s1[i]==s2[i]){
				continue;
			}
			
			else if(s1[i]<s2[i]){
				
				cout<<"\n\nAs per alphabetic order '"<<s1<<"' comes before '"<<s2<<"'.";
				break;
				
			}
			
			else{
				
				cout<<"\n\nAs per alphabetic order '"<<s2<<"' comes before "<<s1<<"'.";
				break;
				
			}
			
		}
		
	}
	
	else{
		
		for(int i=0;i<n2;i++){
			
			if(s1[i]==s2[i]){
				
				if(i==n2-1){
					
					cout<<"\nBoth the strings are same.";
					
				}
				
				continue;
				
			}
			
			else if(s1[i]<s2[i]){
				
				cout<<"\n\nAs per alphabetic order '"<<s1<<"' comes before "<<s2<<"'.";
				break;
				
			}
			
			else{
				
				cout<<"\n\nAs per alphabetic order '"<<s2<<"' comes before "<<s1<<"'.";
				break;
				
			}
			
		}
		
		
	}
	
}

//Function to convert lower case to upper case
void convet_up(char* str){
    
    int n1=str_count(str);
    
    for(int i=0;i<n1;i++){
    
    	if(str[i]>=97){
    		
    		str[i]=str[i]-32;   //so in int value of A is 65 and a is 97 so diff. is 32
    		
		}
    	
	}
	
	cout<<"\nYour string after conversion: "<<str<<"\n";
	
}

//Function to reverse a string
void Reverse(char str[]){
	
	if(*str=='\0') // the base case
	{
		return;
	}
	
	else // the recursive step
	{
		Reverse(str+1);
		cout<<*(str);
	}
	
}


//Driver code
int main(){
	
	
	char str[20];   //in place string we will create character array
	
	char opt;
	
	do{
		
		//system("cls");
		
		
		cout<<"\n\t\t\t\tWELCOME PROGRAMER\n"
	        <<"\n\t\tThis a menu driven program to perform operations on strings "
	        <<"\n-------------------------------------------------------------------------------------------------------\n";
	    
	    //Menue
		cout<<"What operation you want to perform on string:\n"
	        <<"\n\t1) Show address of each character in string"
            <<"\n\t2) Concatenate two strings"  
            <<"\n\t3) Compare two strings" 
            <<"\n\t4) Calculate length of the string (use pointers)"
            <<"\n\t5) Convert all lowercase characters to uppercase"
            <<"\n\t6) Reverse the string"
            <<"\n\t   Press '0' for exit"
            <<"\n\n\tEnter Your choice:";
        
        cin>>opt;
        cout<<"\n******************************************\n";
    
        
        switch(opt){
        	
        	case '0':
        		
        		{
        			return 0;
				}
        	case '1':
        		
        		{
        			//system("cls");
        			cout<<"\n\tShow address of each character in string\n\t----------------------------------------\n\n";
        			cout<<"Enter your string: ";
        		    cin>>str;
        		    print_loc(str);
				}
        		
        		break;
        		
        	case '2':
        		
        		{
        			concat_str();
				}
        		
        		break;
        		
        	case '3':
        		
        		{
        			comp_str();
				}
        		
        		break;
        		
        	case '4':
        		
        		{
        			//system("cls");
        			cout<<"\n\tCalculate length of the string (use pointers)\n\t---------------------------------------------\n";
        			cout<<"\nEnter your string: ";
        		    cin>>str;
        		    int n1=str_count(str);
        		    cout<<"\nLength of string is: "<<n1;
        		    
				}
				
        		break;
        		
        	case '5':
        		
        		{
        			//system("cls");
        			cout<<"\n\tConvert all lowercase characters to uppercase\n\t---------------------------------------------\n";
        			char str[20];
 	                cout<<"\nEnter your string: ";
                    cin>>str;
        			convet_up(str);
				}
				
        		break;
        		
        	case '6'://Reverse the string
        		
        		{
        			//system("cls");
        			cout<<"\n\tReverse the string\n\t------------------\n";
        			char str[20];
 	                cout<<"\nEnter your string: ";
                    cin>>str;
                    cout<<"\nYour reversed string is:";
                    Reverse(str);
				}
				
        		break;
        		
        	default :
        		
        		{
        			cout<<"Invalid input/choice.";
				}
				
		}

		cout<<"\n\n==============================================================\n";
		
		//system("pause");
		
	}while(opt!='0');
	
}
