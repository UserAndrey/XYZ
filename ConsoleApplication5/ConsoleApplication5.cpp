#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{   setlocale(LC_ALL, "Russian");
    bool T; T = true;
    if (T)
    {
        cout << "Привет, мир\n";
    }
    else cout << "exit";
    float x, y, z;
    cout << "Input x:\n";
    cin >> x;
    cout << "Input y:\n";
    cin >> y;
    cout << "Input z:\n";
    cin >> z;
    cout << "x= "<<x<<";y= "<<y<<";z= "<<z<<endl;
    return 0;
    system("pause");
}