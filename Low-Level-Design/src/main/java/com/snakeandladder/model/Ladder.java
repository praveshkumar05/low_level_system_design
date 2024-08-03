package com.snakeandladder.model;

public class  Ladder{

    private final int startPosition, endPostion;

    public Ladder(int startPosition, int endPostion){
        this.startPosition = startPosition;
        this.endPostion = endPostion;
    }

    public int getStartPosition() {
        return startPosition;
    }

    public int getEndPostion() {
        return endPostion;
    }

}