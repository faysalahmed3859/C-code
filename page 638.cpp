#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
int main()
{

    vector<char>v(10);
    unsigned int i;
    cout<<"Size="<<v.size()<<endl;
    for(i=0;i<10;i++) v[i]=i+'a';
    cout<<"Current contents:"<<endl;
    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl<<endl;
    cout<<"expanding vector\n";
    for(i=0;i<10;i++) v.push_back(i+5+'a');
    cout<<"size now="<<v.size()<<endl;
    cout<<"Current contents:\n";
    for(i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<"\n\n";
    for(i=0;i<v.size();i++) v[i]=toupper(v[i]);
    cout<<"Modified contents:\n";
    for(i=0;i<v.size();i++) cout <<v[i]<<" ";
    cout<<endl;

}
