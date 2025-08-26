public class Example_3 extends Thread
{
    @Override
    public void run()
    {
        for(int a = 0; a < 10; a++)
        {
            System.out.println("class Example_1: "+a);
        }
    }
}
