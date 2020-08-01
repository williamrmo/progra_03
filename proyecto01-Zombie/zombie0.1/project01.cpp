#include <iostream>
#include "./Entities/Player.hpp"
#include "./DAL/LinkedList.hpp"

using namespace std;

int main() {
    /*
    Player j1(3, "William");
    cout << j1.get_name() << endl;

    j1.increased_points(1250);
    cout << j1.get_point() << endl;

    j1.increased_points(250);
    cout << j1.get_point() << endl;

    j1.reduce_points(150);
    cout << j1.get_point() << endl;
    
    */

   ListBoard b;

    for (int i = 0; i < 25; i++) b.push((i+1), 1);
    
    b.print(0,0);
    return 0;
}

