#include<bits/stdc++.h>
using namespace std;
 
int sqr(int x){
    return x*x;
}


int pow(int a, int b){
    if(b==0) return 1;
    else{
        if(b%2==0){
            return sqr(pow(a, b/2));
        }
        else return a*sqr(pow(a, b/2));
    }


}

int main(){
    int tc;
    int a, b;
    cin >> tc;
    for(int i = 1 ; i <= tc; i++){
        cin >> a >> b;
    
        cout << "#" << i << " " << pow(a, b) << endl;
    }


    return 0;
}