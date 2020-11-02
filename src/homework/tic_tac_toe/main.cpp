#include"tic_tac_toe.h"

using std::cout;	using std::cin;

int main() 
{
	TicTacToe start;
	cout<<"Shall we play a game? Y or N: ";
	char guess;
	cin>>guess;
	while (guess == 'Y' || guess == 'y')
	{
		cout<<"Enter X or O: ";
		string value;
		cin>>value;

		start.start_game(value);
		while(start.game_over() != true)
		{
			int position;
			cout<<"Enter a position from 1 to 9: ";
			cin>>position;
			start.mark_board(position);
			start.display_board();
		}
		cout<<"Shall we play a game? Y or N: ";
		cin>>guess;
	}	
		
	return 0;
}