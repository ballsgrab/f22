#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void reverse(){
    string x,final;
    getline(cin,x);
    int start = 0;
    if(x.size()<=1){
        final+=x;
    }
    /*
    else if(!cin>>x){
        //do nothing to final?
    } */
    for(int i=start;i<x.size();i++){
            if(ispunct(x.at(i)) || isspace(x.at(i))){
                for(int j=i-1;j>=start;j--){    //found punctuation or space
                    final+=x.at(j);
                }
                final+=x.at(i);
                start = i+1;
            }
        }
    cout<<x<<endl<<final;
}

int main(){
    reverse();

    return 0;
}