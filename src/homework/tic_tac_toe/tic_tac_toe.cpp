#include "tic_tac_toe.h"

using std::cout;    using std::cin;

bool TicTacToe::game_over()
{
    return check_board_full();
}
void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}
void TicTacToe::mark_board(int position)
{
    int new_position = position - 1;
    pegs[new_position] = player;
    set_next_player();
}
string TicTacToe::get_player() const
{
    return player;
}
void TicTacToe::display_board() const
{
    for(int i = 0; i < pegs.size(); i++)
    {
        if( i == 2 || i == 5 || i == 8){
            cout <<pegs[i]<<"\n";
       } else{
            cout <<pegs[i]<<"|";
        }
       
    }
    cout<<"\n";
}
//Private
void TicTacToe::set_next_player()
{
    if(player == "X" || player == "x")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
    cout<<"player == "<<player<<"\n";
}
bool TicTacToe::check_board_full()
{
    for(int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")

        {
            return false;
        }
    }

    return true;
}
void TicTacToe::clear_board()
{
    for(int i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
}