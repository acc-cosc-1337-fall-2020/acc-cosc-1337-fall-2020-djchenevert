#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"

using std::cout;	using std::cin;

int main() 
{
	TicTacToe start;
	TicTacToeManager manager;
	string player_choice;
	char option;
	
	do{
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
		start.start_game(player_choice);

		do
		{
			cin>>start;
			cout<<start;
		}
		while(start.game_over() != true);

		cout<<"Winner is player: "<<start.get_winner()<<"\n";
		manager.save_game(start);

		cout<<"Shall we play a game? Y or N: ";
		cin>>option;
	}
	while(option == 'Y' || option == 'y');
	cout<<manager;	
		
	return 0;
}