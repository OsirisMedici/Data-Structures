#include <iostream>
using namespace std;

int main(){
    int input;
    cout << "Input Number: ";
    cin >> input;

    for (int i = 2; i < input; i++)
    {
        if (input%i == 0)
        {   
            break;
            
        }
        else{
            cout << "Prime Number" << endl;
        }
        
    }
    
}