# StackOverFlow problem statment

# Funtional Requirements


# Users can post questions, answer questions, and comment on questions and answers.

Users can vote on questions and answers.

Questions should have tags associated with them.

Users can search for questions based on keywords, tags, or user profiles.

The system should assign reputation score to users based on their activity and the quality of their contributions.


# 3.1 Define classes and relationships
Translate entities into classes and come up with a list of attributes you want to have in those classes.

If your design consists of multiple classes, figure out how would they would relate with each other.

In our Stack Overflow example, here are some of the relationships between classes:

A User can ask many Questions, provide many Answers and add many Comments.

A Question can have many Answers, Comments, Tags and Votes.

An Answer can have many Comments and Votes.

A Comment is composed within a Question or an Answer.

A Tag is composed within a Question.
#   l o w - l e v e l - s y s t e m - d e s i g n - 
 
 

# Sanke And Ladder Problem Statment
// Create a snake and ladder application. The application should take as input (from the command line or a file):

// Number of snakes (s) followed by s lines each containing 2 numbers denoting the head and tail positions of the snake.
// Number of ladders (l) followed by l lines each containing 2 numbers denoting the start and end positions of the ladder.
// Number of players (p) followed by p lines each containing a name.
// After taking these inputs, you should print all the moves in the form of the current player name followed by a random number between 1 to 6 denoting the die roll and the initial and final position based on the move.
// Format: <player_name> rolled a <dice_value> and moved from <initial_position> to <final_position>

// When someone wins the game, print that the player won the game.
// Format: <player_name> wins the game

// Rules of the game
// The board will have 100 cells numbered from 1 to 100.
// The game will have a six sided dice numbered from 1 to 6 and will always give a random number on rolling it.
// Each player has a piece which is initially kept outside the board (i.e., at position 0).
// Each player rolls the dice when their turn comes.
// Based on the dice value, the player moves their piece forward that number of cells. Ex: If the dice value is 5 and the piece is at position 21, the player will put their piece at position 26 now (21+5).
// A player wins if it exactly reaches the position 100 and the game ends there.
// After the dice roll, if a piece is supposed to move outside position 100, it does not move.
// The board also contains some snakes and ladders.
// Each snake will have its head at some number and its tail at a smaller number.
// Whenever a piece ends up at a position with the head of the snake, the piece should go down to the position of the tail of that snake.
// Each ladder will have its start position at some number and end position at a larger number.
// Whenever a piece ends up at a position with the start of the ladder, the piece should go up to the position of the end of that ladder.
// There could be another snake/ladder at the tail of the snake or the end position of the ladder and the piece should go up/down accordingly.
// Assumptions you can take apart from those already mentioned in rules
// There won’t be a snake at 100.
// There won’t be multiple snakes/ladders at the same start/head point.
// It is possible to reach 100, i.e., it is possible to win the game.
// Snakes and Ladders do not form an infinite loop.