#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
   vector<string> s{"the", "quick","brown","fox","the","quick"};
   vector<string>:: iterator i;
   for( i = s.begin();i!=s.end();i++)
   {
       cout<<*i<<"\n";
   }

}