public class Example_5_2 implements Runnable
{
    int id;
    public Example_5_2(int name)
    {
        this.id = name;
    }
    @Override
    public void run()
    {
        try
        {
            System.out.println("thread with name: "+id);
        }
        catch(Exception exception)
        {
            exception.printStackTrace();
        }
    }
}
