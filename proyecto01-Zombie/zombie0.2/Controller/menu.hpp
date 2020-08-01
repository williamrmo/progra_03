#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include "../Entities/Player.hpp"

using namespace std;

void main_menu();
void game_menu();
void new_game();

void show_info(Player a, Player b);

bool move_a(int pos);
bool move_d(int pos);
bool move_w(int pos);
bool move_s(int pos);

#endif