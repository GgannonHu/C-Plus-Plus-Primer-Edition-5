/*************************************************************************
	> File Name: p98.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 06:52:21 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> vstr = {"i","","you","forever","!"};
    for(auto it = vstr.cbegin();
       it != vstr.cend();
       ++it)
    cout<<*it<<"";
    cout<<endl;
    return 0;
}
