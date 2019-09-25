#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
int main()
{
    vector<char>v(20);
    vector<char>::iterator p;
    int i;
    p=v.begin();
    i=0;
    while(p!=v.end())
    {
        *p=i+'a';
        p++;
        i++;
    }
    cout<<"Original contents:\n";
    p=v.begin();
    while(p!=v.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<"\n\n";
    p=v.begin();
    while(p!=v.end())
    {
        *p=toupper(*p);
        p++;
    }
    cout<<"Modified contents:\n";
    p=v.begin();
    while(p!=v.end())
    {
        cout<< *p <<" ";
        p++;

    }
    cout<<endl;
}
