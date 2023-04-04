#include<bits/stdc++.h>
using namespace std;


int main(){
    int tc, a, b;
    cin >> tc;
    for(int i = 1; i<=tc ;i++){
        bool flag = true;
        cin >> a >> b;

        cout << "#" << i << " ";
        for(int k = int(sqrt(a));; k++)
        {
            if (k*k < a) continue;
            if(k*k > b) break;
            cout << k*k << " ";
            flag = false;
        }
        if(flag) cout << "NO NUMBER";
        cout << endl;
    }
    return 0;

}