#include<iostream>
using namespace std;
int main(){
    char st[80];
    int len,i,temp;
    cout<<"enter the string";
    cin>>getline(st,80);
    l=strlen(st);
    for(int i=0;i<l/2;i++){
        temp=st[i];
        st[i]=st=[l-1-i];
        st[l-1-i]=temp;
    }
    cout<<st;
}