class A
{
    int a = 10;
    void show()
    {
        System.out.print("Base\n");
    }
    void A_method()
    {
        System.out.print("This is A's Method");
    }
}

class B extends A
{
    void show()
    {
        System.out.print("Derived\n");
    }
    void B_method()
    {
        System.out.print("This is B's Method");
    }
    void show_A()
    {
        super.show();
    }
}

class Def
{
    public static void main(String[] args) {
        A a = new A();
        B b = new B();
        A r;
        r = a;
        r.show();
        r = b;
        r.show();
        
        A c = new B();
        c.show();
        c.A_method();
        
    }
}