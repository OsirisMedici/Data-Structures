#include <iostream>
using namespace std;

int main(){
    int maximumLimit;
    int sum;
    cout << "Enter maximum Limit: ";
    cin >> maximumLimit;
    for (int i = 0; i < maximumLimit; i++)
    {
        if (i%2==0)
        {
            sum = sum + i;
        }
        
    }
    cout << "REsults are: " << sum;
}