
package  com.snakeandladder.model;

public class Player{

      private final String name;
      public int position;
      
      public Player(String name){
        this.name = name;
        this.position = 0;
      }

      public String getName() {
          return name;
      }
      public int getPosition() {
          return position;
      }
}