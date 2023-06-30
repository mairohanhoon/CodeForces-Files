import java.util.Scanner;

public class in_search_of_an_easy_problem {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr;
        arr = new int[n];
        int check = 0;
        for(int i=0; i<n; i++){
            arr[i] = in.nextInt();
            if(arr[i] == 1){
                check = 1;
            }
        }
        if(check == 0){
            System.out.println("EASY");
        }
        else{
            System.out.println("HARD");
        }
    }
}
