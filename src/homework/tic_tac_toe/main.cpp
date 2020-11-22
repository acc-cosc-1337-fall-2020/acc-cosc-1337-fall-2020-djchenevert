#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"

using std::cout;    using std::cin;

int main() 
{
	unique_ptr<TicTacToe> game;
	TicTacToeData data;
	TicTacToeManager manager(data);

	string player_choice;
	char option;
	int game_choice;
	int x = 0;
	int o = 0;
	int t = 0;

	do{
		do{
		cout<<"Choose tictactoe 3 or 4: ";
		cin>>game_choice;
		if(game_choice == 3) {
			game = std::make_unique<TicTacToe3>();
		} 
		else if(game_choice == 4){
			game = std::make_unique<TicTacToe4>();
		}
		else {
			cout<<"Invalid option ";
		}
	}	
		while (game_choice!=3 && game_choice!=4);
		cout<<"Enter X or O: ";
		string player_choice;
		cin>>player_choice;
		if(player_choice == "x")
		{
			player_choice = "X";
		}
		else if(player_choice == "o")
		{
			player_choice = "O";
		}
		while(player_choice != "X" && player_choice != "O"){
			cout<<"Enter X or O: ";
			cin>>player_choice;
			if(player_choice == "x")
			{
				player_choice = "X";
			}
			else if(player_choice == "o")
			{
				player_choice = "O";
			}
		}
		game->start_game(player_choice);
		do
		{
			cin>>*game;
			cout<<*game;
		}
		while(game->game_over() != true);

		cout<<"Winner is player: "<<game->get_winner()<<"\n";
		manager.save_game(game);
		manager.get_winner_total(o, x, t);

		cout<<"Shall we play a game? Y or N: ";
		cin>>option;
	}
	while(option == 'Y' || option == 'y');
	cout<<manager;
	return 0;
}