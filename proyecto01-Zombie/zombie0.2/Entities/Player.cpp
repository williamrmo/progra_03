#include "Player.hpp"

// constructor
Player::Player()
{

    life    = 3;
    name    = " ";
    points  = 0;
    position = 0;

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

void Player::set_name(string set_name)
{
    name = set_name;
}

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
int Player::get_position()
{
    return position;
}

void Player::set_position(int n)
{
    position = n;
}
