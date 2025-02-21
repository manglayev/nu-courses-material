public class Example_5_1 implements Runnable
{
    @Override
    public void run()
    {
        try
        {
            System.out.println("thread without name");
        }
        catch(Exception exception)
        {
            exception.printStackTrace();
        }
    }
}
