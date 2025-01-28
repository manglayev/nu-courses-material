public class Example_15_1 extends Thread
{
  int id;
  public Example_15_1(int threadId)
  {
    id = threadId;
  }
  @Override
  public void run()
  {
    int value = 0;
    while(value < 4)
    {
      synchronized(Example_15_Main.sharedObject)
      {
        value++;
        System.out.println("Thread "+id+" changed the value to "+value);

        try
        {
            Thread.sleep(100);
            //Example_15_Main.sharedObject.wait(100);
        }
        catch (InterruptedException e)
        {
            e.printStackTrace();
        }

      }
    }
  }
}