/*************************************************************************
	> File Name: random.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 09 Apr 2017 11:19:19 PM CST
 ************************************************************************/

#include<iostream>
#include<random>
using namespace std;
int main()
{

  random_device rd;
  for(int n=0; n<10; ++n)
    cout << rd() % 100 << " ";
    cout<<endl;
  return 0;
}

