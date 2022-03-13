#include <iostream>
using namespace std;
int main()
{
    int e ,f;
    cin >> e >> f;
    int a[e][f];
    int b[e][f];
    int c[e][f];
    for (int i = 0; i < e; i++) {
        for (int j = 0; j < f; j++) {
            cin >> a[i][j];
        }
    }
  
    for (int i = 0; i < e; i++) {
        for (int j = 0; j < f; j++) {
            cin >> b[i][j];
        }
    }
    
    for (int i = 0; i < e; i++) {
        for (int j = 0; j < f; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
 
    cout << endl;
    return 0;
}