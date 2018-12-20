#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool isprime(int n)
{
if(n<=1)
return false;
for(int i=2;i<n;i++)
{
if(n%i==0)
return false;
else
return true;
}}
int prime_index(string s)
{
int len=s.length();
for(int i=2;i<len;i++)
if(isprime(i))
cout<<s[i-1];
}
int main()
{
string str="NitishKumarNirala";
prime_index(str);
return 0;
}
