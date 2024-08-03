package com.snakeandladder.service;

import com.snakeandladder.model.Board;
import com.snakeandladder.model.Player;
import java.util.List;

public class GameService {

    final private Board board;
    final private List<Player> players;
    final private int boardSize;


    public GameService(Board board, List<Player> players, int boardSize) {
        this.board = board;
        this.players = players;
        this.boardSize = boardSize;
    }


    

    public boolean play() {
        // Implement the game logic here
        return true; // Placeholder return
    }
}
