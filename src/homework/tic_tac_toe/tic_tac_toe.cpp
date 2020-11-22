#include "tic_tac_toe.h"

using std::cout;    using std::cin;

bool TicTacToe::game_over()
{
    if(check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    return false;

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

string TicTacToe::get_winner()
{
    return winner;
}

std::istream& operator >> (std::istream& in, TicTacToe& game)
{
    if(game.pegs.size() == 9)
    {
        int choice;
        cout<<"Enter a postion from 1 to 9: ";
        in>>choice;
        game.mark_board(choice);
    }
    else if(game.pegs.size())
    {
        int choice;
        cout<<"Enter a position from 1 to 16: ";
        in>>choice;
        game.mark_board(choice);
    }
}

std::ostream& operator << (std::ostream& out, const TicTacToe& game)
{
    if (game.pegs.size() == 9)
    {
        for(int i = 0; i < game.pegs.size(); i++)
        {
            if( i == 2 || i == 5 || i == 8){
                out <<game.pegs[i]<<"\n";
            } else{
                out<<game.pegs[i]<<"|";
            }
        }
    }
    else if(game.pegs.size() == 16)
    {
        for(int i = 0; i < game.pegs.size(); i++)
        {
            if( i == 3 || i == 7 || i == 11 || i == 15){
                out <<game.pegs[i]<<"\n";
            } else{
                out<<game.pegs[i]<<"|";
            }
        }
    }
    out<<"\n";
}
//Private

bool TicTacToe::check_column_win()const
{
    return false;
}
bool TicTacToe::check_row_win()const
{
    return false;
}
bool TicTacToe::check_diagonal_win()const
{
    return false;
}
void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else{
        winner = "X";
    }
}
void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}
bool TicTacToe::check_board_full() const
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