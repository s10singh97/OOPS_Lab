import java.util.Scanner;

class Anagram
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter 1st word: ");
        String a = in.nextLine();
        System.out.print("Enter 2nd word: ");
        String b = in.nextLine();
        a = a.replaceAll(" ", "");
        b = b.replaceAll(" ", "");
        a = a.toUpperCase();
        b = b.toUpperCase();
        char aa[];
        aa = a.toCharArray();
        for(int i = 0; i < a.length(); i++)
        { 
            b = b.replaceAll(String.valueOf(aa[i]), "");
        }
        if(b.length() == 0)
            System.out.print("Strings are Anagrams");
        else
            System.out.print("These are NOT Anagrams");
    }
}