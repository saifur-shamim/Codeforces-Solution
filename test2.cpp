#include <iostream>
#include <vector>

using namespace std;

// Function prototypes
void displayBoard(const vector<vector<char>> &board);
bool isMoveValid(const vector<vector<char>> &board, int row, int col);
bool isBoardFull(const vector<vector<char>> &board);
char checkWinner(const vector<vector<char>> &board);

int main() {
    // Initialize the board
    vector<vector<char>> board(3, vector<char>(3, ' '));

    // Variables to keep track of the current player and the game status
    char currentPlayer = 'X';
    bool gameWon = false;

    // Main game loop
    while (!isBoardFull(board) && !gameWon) {
        // Display the current state of the board
        displayBoard(board);

        // Get the player's move
        int row, col;
        cout << "Player " << currentPlayer << "'s turn. Enter row (1-3) and column (1-3) separated by space: ";
        cin >> row >> col;

        // Adjust row and column to 0-based indices
        row--;
        col--;

        // Check if the move is valid
        if (isMoveValid(board, row, col)) {
            // Make the move
            board[row][col] = currentPlayer;

            // Check if the current player has won
            char winner = checkWinner(board);
            if (winner != ' ') {
                gameWon = true;
                displayBoard(board);
                cout << "Player " << winner << " wins!" << endl;
            } else {
                // Switch to the next player
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    // Check if the game ended in a draw
    if (!gameWon) {
        displayBoard(board);
        cout << "The game is a draw!" << endl;
    }

    return 0;
}

void displayBoard(const vector<vector<char>> &board) {
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isMoveValid(const vector<vector<char>> &board, int row, int col) {
    // Check if the cell is within the board boundaries and is empty
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ');
}

bool isBoardFull(const vector<vector<char>> &board) {
    // Check if there are no empty cells on the board
    for (const auto &row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;
            }
        }
    }
    return true;
}

char checkWinner(const vector<vector<char>> &board) {
    // Check rows, columns, and diagonals for a winning combination
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return board[i][0];  // Row win
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return board[0][i];  // Column win
        }
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return board[0][0];  // Diagonal win (top-left to bottom-right)
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return board[0][2];  // Diagonal win (top-right to bottom-left)
    }
    return ' ';  // No winner yet
}
