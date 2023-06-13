#include <iostream>
using namespace std;

int main()
{
    int maxLimit;
    cout << "Enter Limit: ";
    cin >> maxLimit;
    int row;
    int count = 1;

    while (row <= maxLimit)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "*" << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}