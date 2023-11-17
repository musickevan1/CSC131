#include <iostream>
using namespace std;

/*
Name: Evan Musick
Date: 10/14/2023
Course: CSC-131-002
Purpose: This program implements the game of Tic-Tac-Toe where you can play against the computer.
Player 1 will be the user and player 2 will be the computer.
*/

// Constant Integer for 3x3 Board Size
const int SIZE = 3;

// Function to display the Tic-Tac-Toe board
void display_table(char board[SIZE][SIZE]) {
    cout << "The current state of the game is:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == '\0') {
                cout << "_ ";
            } else {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
    }
}

// Function to clear the Tic-Tac-Toe board
void clear_table(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '\0';
        }
    }
}

// Function to check if the board is full
bool check_table_full(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == '\0') {
                return false;
            }
        }
    }
    return true;
}

// Function to check if a move is legal
bool check_legal_option(char board[SIZE][SIZE], int row, int col) {
    return (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == '\0');
}

// Function to generate a move for player 2 (computer)
void generate_player2_move(char board[SIZE][SIZE]) {
    if (!check_table_full(board)) {
        int row, col;
        do {
            row = rand() % SIZE;
            col = rand() % SIZE;
        } while (!check_legal_option(board, row, col));

        board[row][col] = 'X';
        cout << "Player 2 has entered [" << row + 1 << ", " << col + 1 << "]" << endl;
        display_table(board);
    }
}

// Function to check if a player has three in a row
int check_three_in_a_row(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') {
            return 1; // Player 1 wins
        }
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
            return 2; // Player 2 wins
        }
    }

    for (int j = 0; j < SIZE; j++) {
        if (board[0][j] == 'O' && board[1][j] == 'O' && board[2][j] == 'O') {
            return 1; // Player 1 wins
        }
        if (board[0][j] == 'X' && board[1][j] == 'X' && board[2][j] == 'X') {
            return 2; // Player 2 wins
        }
    }

    if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
        return 1; // Player 1 wins diagonally
    }
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
        return 2; // Player 2 wins diagonally
    }

    if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
        return 1; // Player 1 wins diagonally
    }
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
        return 2; // Player 2 wins diagonally
    }

    return 0; // No winner yet
}

// Function to check if the game has ended
bool check_end_of_game(char board[SIZE][SIZE]) {
    return check_three_in_a_row(board) || check_table_full(board);
}

// Function to get a move from player 1 (user)
void get_player1_move(char board[SIZE][SIZE]) {
    int row, col;
    do {
        cout << "Player 1 enter your selection [row col]: ";
        cin >> row >> col;
        row--; // Adjust for 0-based indexing
        col--;
    } while (!check_legal_option(board, row, col));

    board[row][col] = 'O';
    display_table(board);
}

// Function to print the winner or declare a stalemate
void print_winner(char board[SIZE][SIZE]) {
    int winner = check_three_in_a_row(board);
    if (winner == 1) {
        cout << "Congratulations, Player 1 wins!" << endl;
    } else if (winner == 2) {
        cout << "Player 2 wins!" << endl;
    } else {
        cout << "Game over, no player wins." << endl;
    }
}

int main() {
    char board[SIZE][SIZE];
    clear_table(board);
    display_table(board);

    do {
        get_player1_move(board);
        if (!check_end_of_game(board)) {
            generate_player2_move(board);
        }
    } while (!check_end_of_game(board));

    print_winner(board);

    return 0;
}
