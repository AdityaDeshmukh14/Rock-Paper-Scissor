# Rock-Paper-Scissor

## Project Description
A simple console-based Rock-Paper-Scissors game. The game allows the user to play against the computer, which randomly selects its move.

## How to Play
- Clone the repository or download the source code files.
- Compile the code using a C++ compiler.
- Run the executable file generated.
- Alternatively, run the 'game.exe' file 
- Follow the on-screen instructions to play the game:
    - Enter 'r' for Rock, 'p' for Paper, or 's' for Scissors.
    - The computer will randomly select its move.
    - The game will display the result (win, lose, or draw) based on the moves.
    - At the end of each game, you can choose to play again or exit the game.

## Code Overview
- getComputerMove(): Generates a random move for the computer ('r' for Rock, 'p' for Paper, 's' for Scissors).
- checkWinner(): Compares the player's move with the computer's move to determine the winner.
- main(): Controls the flow of the game, takes user input, displays the result, and allows the user to play multiple rounds.

## Improvements
- Add error handling for input validation to handle unexpected inputs.
- Implement a scoring system to track the number of wins, losses, and draws.
- Create a graphical user interface (GUI) for a more user-friendly experience.