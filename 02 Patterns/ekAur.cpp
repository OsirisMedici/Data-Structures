#include <iostream>
using namespace std;

int main()
{
    int maxLimit;
    cout << "Enter Limit: ";
    cin >> maxLimit;
    int i;
    char count = 'A';
    while (i <= maxLimit)

    {
        int j = 1;
        while (j <= maxLimit)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}