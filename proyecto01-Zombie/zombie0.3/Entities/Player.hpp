#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{

private:

    int id;
    int life;
    string name;
    int points;
    int position;

public:

    Player(int set_id, string set_name);
    //~Player();
    int get_id();
    // life methods
    int get_life();
    void set_life(int n);

    // name methods
    string get_name();

    // points methods
    int get_point();
    void set_point(int n);

    // position methods
    int get_position();
    void set_position(int n);
    
};

#endif