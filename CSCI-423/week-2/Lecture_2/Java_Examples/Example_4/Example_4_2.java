public class Example_4_2 extends Thread
{
  @Override
  public void run()
  {
      for(int a = 0; a < 5; a++)
      {
          System.out.println("Example_4_2 :"+a);
      }
  }
}
