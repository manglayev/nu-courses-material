public class Example_4_1 extends Thread
{
  @Override
  public void run()
  {
      for(int a = 0; a < 5; a++)
      {
          System.out.println("Example_4_1 :"+a);
      }
  }
}
