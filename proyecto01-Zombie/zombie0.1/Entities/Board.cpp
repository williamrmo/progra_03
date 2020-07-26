#include "Board.hpp"

Board::Board(int n_s_x, int n_s_y, int n_enemies, int n_extra_life, int p_out_x, int p_out_y)
{
    s_x = n_s_x;
    s_y = n_s_y;

    size[s_x][s_y];

    for(int i = 0; i <= s_x; i++){
        for(int j = 0; j <= s_y; j++){
            size[i][j] = 5;
        }
    }

    enemies = n_enemies;
    extra_life = n_extra_life;
    out_x = p_out_x;
    out_y = p_out_y;

}

Board::~Board()
{
}

int Board::get_matrix()
{


    return size;
}