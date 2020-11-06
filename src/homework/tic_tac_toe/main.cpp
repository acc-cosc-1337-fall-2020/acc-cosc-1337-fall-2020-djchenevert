#include"tic_tac_toe.h"

using std::cout;	using std::cin;

int main() 
{
	TicTacToe start;
	cout<<"Shall we play a game? Y or N: ";
	char option;
	cin>>option;
	string player_choice;
	while (option == 'Y' || option == 'y')
	{
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
		while(start.game_over() != true)
		{
			int position;
			cout<<"Enter a position from 1 to 9: ";
			cin>>position;
			start.mark_board(position);
			start.display_board();
		}
		cout<<"Winner is player: "<<start.get_winner()<<"\n";

		cout<<"Shall we play a game? Y or N: ";
		cin>>option;
	}
	while(option == 'Y' || option == 'y');
	}
		
	return 0;
}