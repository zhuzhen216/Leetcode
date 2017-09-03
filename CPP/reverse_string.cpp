#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
void reverseStr(string &str)
{
int n = str.length();
int i = 0;
int j = n - 1;
while (i<j)
{
swap(str[i],str[j]);
i++;
j--;
}
}

int main()
{
string str;
cout << "Please input the string to reverse:\n";
cin >> str; 
reverseStr(str);
cout << str+"\n";
}
