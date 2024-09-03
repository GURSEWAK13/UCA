public class Main {
public class PriorityQueue {
    private Integer[] pq;
    private int n;

    public PriorityQueue(int capacity) {
        this.pq = new Integer[capacity + 1];
        this.n = 0;
    }

    public void insert(int x) {
        this.pq[++n] = x;
        swim(n);
    }

    public Integer deleteMax() {
        int maxElement = this.pq[1];
        exch(1, n--);
        sink(1);
        return maxElement;
    }

    public boolean isEmpty() {
        return this.n == 0;
    }

    public int size() {
        return this.n;
    }

    private void swim(int k) {
        while (k > 1 && this.pq[k] > this.pq[k / 2]) {
            exch(k, k / 2);
            k = k / 2;
        }
    }

    private void exch(int x, int y) {
        int temp = this.pq[x];
        this.pq[x] = this.pq[y];
        this.pq[y] = temp;
    }

    private void sink(int k) {
        while (2 * k <= n) {
            int j = 2 * k;
            if (j < n && this.pq[j] < this.pq[j + 1]) {
                j++;
            }
            if (this.pq[k] >= this.pq[j]) {
                break;
            }
            exch(k, j);
            k = j;
        }
    }
}
    public static void main(String[] args) {
        PriorityQueue pq = new PriorityQueue(10);
        pq.insert(5);
        pq.insert(11);
        pq.insert(7);

        assert pq.deleteMax() == 11;
        assert pq.size() == 2;

        pq.insert(15);

        assert pq.deleteMax() == 15;
    }
}
