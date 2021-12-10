//a program that prints a table indicating the number of occurrences of each alphabet 
//in the text entered as command line arguments

#include<iostream>
using namespace std;

void count_char(int a,string str){
	
	//cout<<"\n"<<str;
	//Now we have to count each letter
	
	//So
	int count=0;//variable to count the letters
	for(int i=0;i<str.length();i++){
		//cout<<"\n"<<str[i];  //Now we can access all the letters now we have to campare all the letters
		for(int j=0;j<str.length();j++){
			
			if(str[i]==str[j]){
				count+=1;
			}
		}
		//if i==0 means its the first letter so we wont check it and print it
		if(i==0){
		    cout<<"\nThe number of occurance of '"<<str[i]<<"' is:"<<count;
		    count=0;
	    } 
	    
	    //from i==1 we will check for each letter the repetetion
	    else{
	    	
	    	bool c=true; //let us consider that word had occured only once
	    	//if it occur again then we will change it ot false
	    	
	    	//loop for checking the repetetion
	    	
	    	for(int j=i-1;j>=0;j--){  //here we will go in reverse direction from i to 0
	    		
	    		if(str[i]==str[j]){  //checing both the values
	    			
	    			c=false;   //if condition is true means letter is repeated so c changed to false
	    			break;    //if it already occured once then we no need to check it again
				}
				else{
					continue; //means continuation of checking
				}
				
			}
			
			if(c){  //here if c is true means it occured only once if it false the there is repetetion
			    cout<<"\nThe number of occurance of '"<<str[i]<<"' is:"<<count;
		        
			    //count=0 to start counting again for next letter
			    //value of d and y are wrong because if c is false count wont be 0 so we need to move it
				
			}
	    	
		}
		count=0;
		//after moving count out of else the result is as per desired
		//with this program ends
		//thank u
		
				
	}
		
	
	
	//Now we have the problem that a is first showing 3 and then 2 and then 1
	//so after counting we dont want to count it again
	//so now we need to check that the letter at position i is occured before or not 
	//so we will create a loop of check whether it occured before or not 
	//if it occured then we will not print the statenemt 
	//nd if not then we will print it
	
	
}

int main(int argc,char* argv[]){
	
	cout<<"\n\t\t\t\tWELCOME PROGRAMER\n"
	    <<"\n\t\tThis a program that prints a table indicating "
		<<"\n\t the number of occurrences of each alphabet in the text entered as command line arguments\n"
	    <<"-------------------------------------------------------------------------------------------------------\n";
	    
	//argc count the words in command line cout<<argc;
	//first word is the name of our file
	
	
	//cout<<"\n"<<argv; this will give the location of first word in memory
	
	//Now we have to count the occurance of each letter
	
	//So we will create a function to count it
	//the problem is that we have to count each letter in the whole statement 
	//by now we can only pass each word at a time through argv[]
	
	//so we will create a string and concatinate all the word one by one
	
	string str="";
	
	for(int i=1;i<argc;i++)  //value of is 1 beacuse 1st word is name of file
	{
		str=str+argv[i];
	}
	cout<<"\nYour String is:"<<str<<endl;
	//Now we can pass the string to our function
	
	count_char(argc,str);
	
	
	cout<<"\n------------------------------------------------------------------\n";
	return 0;
}
