#include <random>
#include <iostream>

using namespace std;

int main()
{
    cout << rand() << endl;

    for (int i = 0; i < 55; i++)
    {
        if (i % 5 == 0)
        {
            cout << i << " -> " << (i % 5) << endl;
        }
        
    }

}