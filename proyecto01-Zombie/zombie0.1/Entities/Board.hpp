#include <string>

using namespace std;

class Board
{

private:

    int s_x;
    int s_y;
    int size[0][0];
    int enemies;
    int extra_life;
    int out_x;
    int out_y;

public:

    Board(int n_s_x, int n_s_y, int n_enemies, int n_extra_life, int p_out_x, int p_out_y);
    ~Board();
    int get_matrix();
};


