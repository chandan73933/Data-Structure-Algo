#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
 string s1;
 string s2;
 cin>>s1;
 cin>>s2;
 //cout<<s1.append(s2);
 cout<<" "<<s1;
 cout<<" "<<s2;
 cout<<"\n"<<s1.find("m");//return index
 cout<<"\n"<<s1.length();
 cout<<"\n"<<s1.erase(1 ,3);//erase from given index
 cout<<"\n"<<s1.insert(0,"sss");
 cout<<"\n"<<s1.size();
 cout<<"\n"<<
 sort(s1.begin(), s1.end());
 cout<<"\n"<<s1;
 }

