#include <iostream>
#include<string>
using namespace std;

int main() {
	int T=0;
    cout<<"Enter T\n"; 
	cin>>T;
	while(T--)
	{
	    string str;
	    cin>>str;
	    int sum = 0;
	    int ans=0;
	    string temp ="";
	    for(char ch:str)
	    {
	        if(isdigit(ch))
	        {
	            temp+=ch;
	        }
	        
	        else { 
                // increment sum by number found earlier 
                // (if any) 
                sum += atoi(temp.c_str()); 
      
                // reset temporary string to empty 
                temp = ""; 
	         }
	     }
	    ans = sum.atoi(temp.c_str());
	    cout<<ans<<endl;
	}
}