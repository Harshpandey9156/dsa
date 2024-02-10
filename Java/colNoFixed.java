package Java;

public class colNoFixed {
    public static void main(String[] args) {
        int[][] arr={
            {1,2,3,4},
            {2,5,6,8,9},
            {2,4}

        };
        for(int i=0;i<=arr.length;i++){
            for(int j=0; j<=arr[i].length;j++)
            {
                System.out.println(arr[i][j] + " ");
            }
        }
    }
}
