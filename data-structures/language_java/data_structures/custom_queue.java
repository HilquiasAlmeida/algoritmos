import java.util.LinkedList;

public class custom_queue<T> {
    private LinkedList<T> list = new LinkedList<>();

    public void enqueue(T item) {
        list.addLast(item);
    }

    public T dequeue() {
        if (list.isEmpty()) {
            throw new RuntimeException("Fila vazia!");
        }
        return list.removeFirst();
    }

    public static void main(String[] args) {
        custom_queue<Integer> queue = new custom_queue<>();
        queue.enqueue(100);
        queue.enqueue(200);

        System.out.println("Elemento removido da Fila (Java): " + queue.dequeue());
    }
}
