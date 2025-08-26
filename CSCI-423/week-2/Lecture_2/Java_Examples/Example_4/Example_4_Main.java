public class Example_4_Main
{
    public static void main(String[] args)
    {
        Example_4_1 thread_1 = new Example_4_1();
        Example_4_2 thread_2 = new Example_4_2();
        thread_1.start();
        thread_2.start();
    }
}
