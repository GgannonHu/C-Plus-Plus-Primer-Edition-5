/*************************************************************************
	> File Name: 3_6.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 03 Apr 2017 02:02:06 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str("hello world!");
    for(auto &c : str)
        c = 'X';
    cout<<str<<endl;
    return 0;
}

