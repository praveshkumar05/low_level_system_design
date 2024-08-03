
package com.snakeandladder.model;

public class Snake{

    private final int tailPostion;
    private final int headPosition;

    public Snake(int tailPostion, int headPosition)
    {
        this.tailPostion = tailPostion;
        this.headPosition = headPosition;
    }

    public int getTailPostion() {
        return tailPostion;
    }

    public int getHeadPosition() {
        return headPosition;
    }

}