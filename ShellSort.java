public class ShellSort {
    public static void sort(int[] a) {
        int n = a.length;
        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = a[i], j;
                for (j = i; j >= gap && a[j - gap] > temp; j -= gap)
                    a[j] = a[j - gap];
                a[j] = temp;
            }
        }
    }
    public static void main(String[] args) {
        int[] a = {9, 8, 3, 7, 1};
        sort(a);
        for (int x : a) System.out.print(x + " ");
    }
}
