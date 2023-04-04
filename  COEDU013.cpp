#include<bits/stdc++.h>
using namespace std;
#define MAX 100009

int a[MAX];
bool danh_dau[MAX] = {0};
int n;

void nhap(int a[], int n){
    for(int i = 0 ;i  < n; i++)
    {
        cin >> a[i];
    }
}

int main(){

    int testcase;
    cin >> testcase;
    int tc = 0;
    while (testcase--)
    {
        memset(danh_dau, 0, sizeof(danh_dau));
        
        cin >> n;
        nhap(a, n);
        int result = -1;
        for(int i = 0 ; i < n ; i++){
            if(danh_dau[a[i]] == 0){
                danh_dau[a[i]]=1;
            }
            else{
                result = a[i];
                break;
            }

        }
        tc++;
        cout << "#" << tc << " " << result << endl;

    }
    
    
    return 0;
}