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
        int value = row;
        int col = 1;
        while (col <= row)
        {
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row++;
    }
}