public class Example_6_Main
{
    public static void main(String[] args)
    {
      int size = 5;
      Thread[] threads = new Thread[size];
      for (int a = 0; a < size; a++)
      {
          threads[a] = new Thread( new Example_6(a) );
          threads[a].start();
      }
    }
}
