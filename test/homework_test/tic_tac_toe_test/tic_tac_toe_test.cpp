#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify Tictactoe3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE(game->get_player()=="X");
	game->start_game("O");
	REQUIRE(game->get_player()=="O");
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);	
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(6);
	game->mark_board(9);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
}
TEST_CASE("Test win by first column tictactoe 3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(4);
	game->mark_board(2);
	game->mark_board(9);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second column tictactoe 3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(4);
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by third column tictactoe 3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(6);
	game->mark_board(7);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}


TEST_CASE("Test win by first row tictactoe 3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(2);
	game->mark_board(6);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}

TEST_CASE("Test win by second row tictactoe 3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(4);
	game->mark_board(3);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(6);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third row tictactoe 3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	game->mark_board(1);
	game->mark_board(8);
	game->mark_board(6);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by diagonally from top left tictactoe 3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(9);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by diagonally from bottom left tictactoe 3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(7);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(3);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by first column tictactoe 4"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(4);
	game->mark_board(5);
	game->mark_board(12);
	game->mark_board(9);
	game->mark_board(10);
	game->mark_board(13);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second column tictactoe 4"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(4);
	game->mark_board(10);
	game->mark_board(11);
	game->mark_board(14);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third column tictactoe 4"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(3);
	game->mark_board(4);
	game->mark_board(7);
	game->mark_board(9);
	game->mark_board(11);
	game->mark_board(13);
	game->mark_board(15);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by fourth column tictactoe 4"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	game->mark_board(5);
	game->mark_board(8);
	game->mark_board(11);
	game->mark_board(12);
	game->mark_board(13);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by first row tictactoe 4"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(2);
	game->mark_board(6);
	game->mark_board(3);
	game->mark_board(7);	
	game->mark_board(4);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by second row tictactoe 4"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(5);
	game->mark_board(3);
	game->mark_board(6);
	game->mark_board(9);
	game->mark_board(7);
	game->mark_board(13);	
	game->mark_board(8);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by third row tictactoe 4"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(9);
	game->mark_board(1);
	game->mark_board(10);
	game->mark_board(12);
	game->mark_board(11);
	game->mark_board(15);	
	game->mark_board(12);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by fouth row tictactoe 4"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(13);
	game->mark_board(1);
	game->mark_board(14);
	game->mark_board(12);
	game->mark_board(15);
	game->mark_board(8);	
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by diagonally from top left tictactoe3"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(1);
	game->mark_board(3);
	game->mark_board(6);
	game->mark_board(12);
	game->mark_board(11);
	game->mark_board(8);
	game->mark_board(16);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}
TEST_CASE("Test win by diagonally from bottom left tictactoe 4"){
	std::unique_ptr<TicTacToe> game;
	game = std::make_unique<TicTacToe4>();
	game->start_game("X");
	game->mark_board(4);
	game->mark_board(12);
	game->mark_board(7);
	game->mark_board(9);
	game->mark_board(10);
	game->mark_board(8);
	game->mark_board(13);
	REQUIRE(game->game_over()==true);
	REQUIRE(game->get_winner() == "X");
}