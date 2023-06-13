#include <iostream>
using namespace std;

int main()
{
    int maxLimit;
    cout << "Enter Limit: ";
    cin >> maxLimit;
    int row = 1;

    while (row <= maxLimit)
    {
        int col = 1;
        while (col <= maxLimit)
        {
            char ch = 'A' + col - 1;
            cout << ch;
            col++;
        }

        cout << endl;
        row++;
    }
}