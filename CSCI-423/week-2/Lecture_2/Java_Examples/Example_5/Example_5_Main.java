public class Example_5_Main
{
    public static void main(String[] args)
    {
      Example_5_1 example1 = new Example_5_1();
      Example_5_2 example2 = new Example_5_2(123);
      Thread thread1 = new Thread(example1);
      Thread thread2 = new Thread(example2);
      thread1.start();
      thread2.start();
    }
}
