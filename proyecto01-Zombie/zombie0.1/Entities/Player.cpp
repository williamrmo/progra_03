#include "Player.hpp"

// constructor
Player::Player(int new_life, string new_name)
{

    life    = new_life;
    name    = new_name;
    points  = 0;
    pos_x   = 0;
    pos_y   = 0;

}

// descructor
/*
Player::~Player()
{
    "bye";
}
*/

// life methods
int Player::get_life()
{
    return life;
}

void Player::reduce_life(int n)
{
    life = life - n;
}

void Player::increased_life(int n)
{
    life = life + n;
}

// name methods
string Player::get_name()
{
    return name;
}

// points methods
int Player::get_point()
{
    return points;
}

void Player::reduce_points(int n)
{
    points = points - n;
}

void Player::increased_points(int n)
{
    points = points + n;
}

// position methods
int Player::get_pos_x()
{
    return pos_x;
}

void Player::set_pos_x(int n)
{
    pos_x = n;
}

int Player::get_pos_y()
{
    return pos_y;
}

void Player::set_pos_y(int n)
{
    pos_y = n;
}