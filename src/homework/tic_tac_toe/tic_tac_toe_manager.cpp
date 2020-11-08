//cpp
#include "tic_tac_toe_manager.h"

//public
    void TicTacToeManager::save_game(TicTacToe b)
    {
        games.push_back(b);
        update_winner_count(b.get_winner());
        get_winner_total(o_win, x_win, ties);
    }
    std::ostream& operator << (std::ostream& out, const TicTacToeManager& manager)
    {
        for (int i = 0; i < manager.games.size(); i++)
        {
            out<<"This is game number: "<<i+1<<"\n";
            out<<manager.games[i]<<"\n";
        }
    }
    void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
    {
        x = x_win;
        o = o_win;
        t = ties;
        std::cout<<"X wins: "<<x<<"\nO wins:"<<o<<"\nTies: "<<t<<"\n\n";
    }

//private
    void TicTacToeManager::update_winner_count(string winner)
    {
        if (winner == "X")
        {
            x_win ++;
        }
        else if(winner == "O")
        {
            o_win ++;
        }
        else
        {
            ties ++;
        }
    }