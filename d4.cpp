#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map <char,int> mp;
    string s = "shubhambhardwaj";
    for(char ch:s)
    {
        mp[ch]++;
    }
    map <char,int>:: iterator itr;
    for(itr = mp.begin();itr!=mp.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

}