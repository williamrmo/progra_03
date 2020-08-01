#include <iostream>
//#include "./Entities/Player.hpp"
#include "./DAL/LinkedList.hpp"
#include "./Controller/menu.hpp"

using namespace std;

int main() {

    //static Player b;
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

    for (int i = 0; i < 25; i++) b.push((i+1), (i+5));
    
    b.print(0,0);

    //b.set_status(1, 1);
    b.set_status(5, 1);
    b.set_status(9, 1);
    cout << endl;
    cout << b.get_status(1) << " - ";
    cout << b.get_status(5);
    /*cout << b.get_content(22) << endl;
    cout << "status " << b.get_status(1) << endl;
    cout << "status " << b.get_status(5) << endl;
    */
    cout << endl;
    b.print(0,0);
    //main_menu();
    return 0;
}

