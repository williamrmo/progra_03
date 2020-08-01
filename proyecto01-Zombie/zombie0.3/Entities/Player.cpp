#include "Player.hpp"

// constructor
Player::Player(int set_id, string set_name)
{
    id      = set_id;
    life    = 3;
    name    = set_name;
    points  = 0;
    position = 1;

}

// descructor
/*
Player::~Player()
{
    "bye";
}
*/
int Player::get_id()
{
    return id;
}
// life methods
int Player::get_life()
{
    return life;
}

void Player::set_life(int n)
{
    life = life + n;
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

void Player::set_point(int n)
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
