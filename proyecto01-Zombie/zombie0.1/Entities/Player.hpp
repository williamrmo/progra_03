#include <string>

using namespace std;

class Player
{

private:

    int life;
    string name;
    int points;
    int pos_x ;
    int pos_y;

public:

    Player(int new_life, string new_name);
    //~Player();

    // life methods
    int get_life();
    void reduce_life(int n);
    void increased_life(int n);

    // name methods
    string get_name();

    // points methods
    int get_point();
    void reduce_points(int n);
    void increased_points(int n);

    // position methods
    int get_pos_x();
    void set_pos_x(int n);
    int get_pos_y();
    void set_pos_y(int n);
    
};

