#include "tic_tac_toe_manager.h"


//public
void TicTacToeManager::save_game(unique_ptr<TicTacToe> &game)
{

    update_winner_count(game->get_winner());

    games.push_back(std::move(game));

}

std::ostream& operator << (std::ostream& out, TicTacToeManager& manager)
{
    for (int i = 0; i < manager.games.size(); i++)
    {
        out<<"This is game number: "<<i+1<<"\n";
        out<<*manager.games[i]<<"\n";
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

TicTacToeManager::TicTacToeManager(TicTacToeData &data)
{
    games = data.get_games();
    for(auto &game_ptr : games)
    {
        update_winner_count(game_ptr->get_winner());
    }
}

TicTacToeManager::~TicTacToeManager() {data.save_games(games);}