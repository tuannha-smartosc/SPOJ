// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int testcase;
//     cin >> testcase;
//     int n, x, y;
//     while (testcase--)
//     {
//         cin >> n >> x >> y;
//         for(int i = 2; i <n; i++){
//             if(i%x == 0 && i%y != 0){
//                 cout << i << " ";
//             }
//         }

//         cout << "\n";
//     }
    

//     return 0;
// }


#include<bits/stdc++.h>
#define nmax 1005

using namespace std;

int t, n, m;
int a[nmax];

int main()
{
    // freopen("test.txt", "r", stdin);
    cin >> t;
    for (int k = 1; k <= t; ++k)
    {
        cin >> n;
        for(int i = 1; i <= n; ++i)
            cin >> a[i];
        
        cin >> m;
        for (int i = 1; i <= m; ++i)
        {
            string s;
            int id, value;
            cin >> s;
            if (s == "insert"){
                cin >> id >> value;
                ++id;
                ++n;
                a[n] = value;
                for (int j = n-1; j >= id; --j)
                    swap(a[j], a[j+1]);
            }
            if (s == "update"){
                cin >> id >> value;
                ++id;
                a[id] = value;
            }   
            if(s == "delete"){
                cin >> id;
                ++id;
                for(int j = id; j < n; ++j)
                    a[j] = a[j+1];
                --n;
            }
                    
        }
        cout << "#" << k << " ";
        for (int j = 1; j <= n; j++)
            cout << a[j] << " ";
        cout << "\n";
    }
    
}