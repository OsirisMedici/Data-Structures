#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "enter a limit: ";
    cin >> number;

    int a = 0;
    int b = 1;
    cout << a << " " << b<< " ";

    for (int i = 0; i <= number; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }
    
}