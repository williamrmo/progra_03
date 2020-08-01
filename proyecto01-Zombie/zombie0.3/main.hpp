#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <random>
    #include <thread>
    #include <chrono>  

#include "./Entities/Player.hpp"
#include "./DAL/LinkedList.hpp"
#include "./DAL/file.hpp"

#define EASY 25
#define MEDIUN 45
#define HARD 60
#define EXTREME 75

using namespace std;

void main_menu();
void game_menu(Player a, Player b, ListBoard board, int level);
void new_game();

void generate(ListBoard board, int level);
void canva(Player a, Player b, ListBoard board, int level);
void show_info(Player a, Player b);
int turn(int n);
char CPU(int p);
int rules_point(Player pl, ListBoard c, int level);
int rules_life(Player pl, ListBoard c, int level);

bool move_a(int pos);
bool move_d(int pos);
bool move_w(int pos);
bool move_s(int pos, int size);

#endif