// Jagged array

import java.util.Scanner;

class jagged{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int [][] a = new int [3][];
        a[0] = new int [3];
        a[1] = new int [4];
        a[2] = new int [6];
        int inp;
        for(int i = 0; i < a.length; i++)
        {
            for(int j = 0; j < a[i].length; j++)
            {
                System.out.print("Enter a[" + i + "][" + j + "]: ");
                inp = in.nextInt();
                a[i][j] = inp*inp;
            }
        }
        System.out.print("Squarred Matrix: \n");
        for(int i = 0; i < a.length; i++)
        {
            for(int j = 0; j < a[i].length; j++)
            {
                System.out.print(a[i][j] + "\t");
            }
            System.out.print("\n");
        }  
        in.close(); 
    }
}