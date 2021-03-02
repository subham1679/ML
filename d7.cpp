#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<vector> 
using namespace std;

int main()
{

   vector<int> A{2,3,6,9,7};   //-5 1 2 3 4 
   vector<int> B{2,3,6,9,8,};   // 2 3 6 8 9 
   unordered_set<int>s;
   int cnt=0;
   for(int x:A)
   {
       s.insert(x);
   }

   for(int i=0;i<B.size();i++)
   {
       if(s.count(B[i])!=0)
       {
           cnt+=1;
       }
   }
   cout<<cnt;
}
