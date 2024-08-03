StackOverflow Functional Requirements
User Interactions
Users can post questions, answer questions, and comment on questions and answers.
Users can vote on questions and answers.
Questions should have tags associated with them.
Users can search for questions based on keywords, tags, or user profiles.
The system should assign a reputation score to users based on their activity and the quality of their contributions.
Class Design and Relationships
Translate entities into classes and come up with a list of attributes you want to have in those classes. If your design consists of multiple classes, figure out how they would relate with each other.

Relationships Between Classes
User:

A User can ask many Questions, provide many Answers, and add many Comments.
Question:

A Question can have many Answers, Comments, Tags, and Votes.
Answer:

An Answer can have many Comments and Votes.
Comment:

A Comment is composed within a Question or an Answer.
Tag:

A Tag is associated with a Question.
Classes and Attributes
Here's a list of potential classes and their attributes:

User
username
email
reputation
questions[]
answers[]
comments[]
Question
title
body
tags[]
answers[]
comments[]
votes[]
user (reference to the User who asked the question)
Answer
body
comments[]
votes[]
user (reference to the User who provided the answer)
question (reference to the Question it belongs to)
Comment
body
user (reference to the User who made the comment)
parent (reference to the Question or Answer it comments on)
Tag
name
questions[] (reference to the Questions associated with the tag)
Vote
type (upvote or downvote)
user (reference to the User who made the vote)
parent (reference to the Question or Answer it votes on)


# Snake and Ladder Problem Statement

## Problem Description
Create a Snake and Ladder application. The application should take the following inputs (from the command line or a file):

1. **Number of snakes (s)**: Followed by `s` lines, each containing 2 numbers denoting the head and tail positions of the snake.
2. **Number of ladders (l)**: Followed by `l` lines, each containing 2 numbers denoting the start and end positions of the ladder.
3. **Number of players (p)**: Followed by `p` lines, each containing a name.

After taking these inputs, the application should print all the moves in the format:
```
<player_name> rolled a <dice_value> and moved from <initial_position> to <final_position>
```

When a player wins the game, print the message:
```
<player_name> wins the game
```

## Rules of the Game
- The board will have 100 cells numbered from 1 to 100.
- The game will have a six-sided die numbered from 1 to 6, and it will always give a random number on rolling it.
- Each player has a piece initially kept outside the board (i.e., at position 0).
- Each player rolls the die when their turn comes.
- Based on the die value, the player moves their piece forward by that number of cells. For example, if the die value is 5 and the piece is at position 21, the player will move their piece to position 26 (21 + 5).
- A player wins if they exactly reach position 100, and the game ends there.
- After the die roll, if a piece is supposed to move outside position 100, it does not move.
- The board contains some snakes and ladders:
  - Each snake has its head at some number and its tail at a smaller number.
  - Whenever a piece ends up at a position with the head of a snake, the piece should go down to the position of the tail of that snake.
  - Each ladder has its start position at some number and end position at a larger number.
  - Whenever a piece ends up at a position with the start of a ladder, the piece should go up to the position of the end of that ladder.
- There could be another snake or ladder at the tail of the snake or the end position of the ladder, and the piece should go up/down accordingly.

## Assumptions
- There won’t be a snake at position 100.
- There won’t be multiple snakes or ladders at the same start/head point.
- It is possible to reach position 100, i.e., it is possible to win the game.
- Snakes and Ladders do not form an infinite loop.

## Example Input
```
3
14 7
99 78
67 2
3
3 15
20 90
80 100
2
Alice
Bob
```

## Example Output
```
Alice rolled a 3 and moved from 0 to 3
Bob rolled a 5 and moved from 0 to 5
Alice rolled a 6 and moved from 3 to 9
Bob rolled a 2 and moved from 5 to 7
Alice rolled a 4 and moved from 9 to 13
Bob rolled a 6 and moved from 7 to 19
Alice rolled a 2 and moved from 13 to 15
Alice wins the game
```