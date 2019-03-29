import java.util.Scanner;

class Def{
    public static void main(String[] args) {
        try {
            Scanner in = new Scanner(System.in);
            String a = in.nextLine();
            int k = in.nextInt();
            String smallest="";
            String largest="";
            for(int i = 0; i <= a.length()-k; i++){
                String subString = a.substring(i,i+k);
                if(i == 0){
                    smallest = subString;
                }
                if(subString.compareTo(largest) > 0){
                    largest = subString;
                }else if(subString.compareTo(smallest) < 0)
                    smallest = subString;
            }
            System.out.println(smallest);
            System.out.println(largest);
        } catch (Exception e) {
            System.out.println(e);
        }
            
    }
}