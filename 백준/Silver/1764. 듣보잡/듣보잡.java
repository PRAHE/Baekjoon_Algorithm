import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();
        sc.nextLine();  // 개행 문자 제거

        Map<String, Integer> map = new HashMap<>();
        List<String> result = new ArrayList<>();

        for (int i = 0; i < N + M; i++) {
            String name = sc.nextLine();
            map.put(name, map.getOrDefault(name, 0) + 1);
            if (map.get(name) == 2) {
                result.add(name);
            }
        }

        Collections.sort(result);
        System.out.println(result.size());
        for (String name : result) {
            System.out.println(name);
        }
        sc.close();
    }
}
