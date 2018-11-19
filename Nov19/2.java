class Outer
{
    int x = 100;
    void test()
    {
        Inner obj = new Inner();
        obj.display();
    }
    class Inner
    {
        void display()
        {
            System.out.println(x);
        }
    }
}

class  Demo
{
    public static void main(String[] args) {
        Outer obj = new Outer();
        obj.test();
    }
}