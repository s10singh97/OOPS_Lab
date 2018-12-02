class Demo{
    int add(int x, int y){return x+y;}
    int add(int x, int y, int z){return x+y+z;}
}
class Test{
    static int fun(int x, int y)
    {
        return x*y;
    }

    public static void main(String[] args) {
        Demo d = new Demo();
        System.out.println(d.add(2, 4));
        System.out.println(d.add(2, 4, 5));
        System.out.print(fun(4, 5));
    }
    static{
        System.out.print("Execute me first!!\n");
    }
}