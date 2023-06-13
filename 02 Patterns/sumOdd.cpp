#include <iostream>
using namespace std;

int main(){
    int maximum;
    cout << "enter the limit: ";
    cin >> maximum;
    int sum = 0;

    for (int i = 0; i <= maximum; i++)
    {
        if (i %2 != 0)
        {
            sum = sum + i;
        }
        
    }
    cout << "Total sum is: " << sum<< endl;
}
