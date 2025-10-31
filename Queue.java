import java.util.LinkedList;
import java.util.Queue;

public class Queue {
    public static void main(String[] args) {
        Queue<Integer> q = new LinkedList<>();
        q.add(1);
        q.add(2);
        System.out.println(q.poll()); // 1
    }
}
