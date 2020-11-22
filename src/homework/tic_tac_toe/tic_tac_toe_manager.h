#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<memory>
#include<utility>

using std::unique_ptr; using std::make_unique;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
    public:
        TicTacToeManager() = default;
        TicTacToeManager(TicTacToeData &d);
        void save_game(unique_ptr<TicTacToe> &game);
        friend std::ostream& operator << (std::ostream& out, TicTacToeManager& manager);
        void get_winner_total(int& o, int& w, int& t);
        ~TicTacToeManager();
    private:
        vector<unique_ptr<TicTacToe>> games;
        int x_win{0};
        int o_win{0};
        int ties{0};
        void update_winner_count(string winner);
        TicTacToeData data;
};

#endif