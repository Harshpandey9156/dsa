package Java.Array;

import java.util.ArrayList;

public class ArrayList1 {
    public static void main(String[] args) {
        ArrayList<Integer> list=new ArrayList<>(2);
        list.add(23);
        list.add(23);
        list.add(222);
        list.add(14);
        list.add(85);

        System.out.println(list);
        list.set(2,45);
        System.out.println(list);

    }
}
