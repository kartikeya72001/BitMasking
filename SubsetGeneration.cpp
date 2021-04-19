#include <iostream>
#include <cstring>
using namespace std;

void CharFiltering(char ch[], int n){
    int j=0;
    while(n>0){
        int last_bit = (n&1);
        if(last_bit){
            cout<<ch[j];
        }
        j++;
        n>>=1;
    }
    cout<<endl;
    return;
}

void Subsets(char ch[]){
    int n = strlen(ch);
    for(int i=0;i<(1<<n);i++){
        CharFiltering(ch,i);
    }
    return;
}

int main(int argc, char const *argv[]) {
    char ch[100];
    cin>>ch;
    Subsets(ch);
    return 0;
}
