import java.util.Queue;
import java.util.LinkedList;
import java.util.ArrayDeque;
class MazeSolver{
    int totalRow;
    int totalCol;
    char[][] grid;
    MazeSolver(int row, int col,char[][] grid) {
        this.totalRow = row;
        this.totalCol = col;
        this.grid = grid;
    }
    boolean isSafe(int row , int col)
    {
        return (row >= 0) && (row < totalRow) && (col >= 0) && (col < totalCol) && (grid[row][col] == "*");
    }
    Queue<Qitem> q = new LinkedList<>();
    q.add(new Qitem(0,0,0));
    while(!q.isEmpty()) {
        
    }
}
class Qitem {
    int row;
    int col;
    int dist;
    Qitem(int row, int col, int dist1) {
        this.row = row;
        this.col = col;
        this.dist = dist1;
    }
}
public class maze {
    public static void main(String[] args) {

    }
}
