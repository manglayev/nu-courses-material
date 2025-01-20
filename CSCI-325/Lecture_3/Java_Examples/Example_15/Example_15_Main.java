// Java program to illustrate Starvation concept
class Example_15_Main
{
  public static Object sharedObject = new Object();
	public static void main(String[] args) throws InterruptedException
	{
		System.out.println("Main thread execution starts");
    int size = 4;
    Thread[] threads = new Thread[size];
    for (int a = 0; a < size; a++)
    {
        threads[a] = new Thread( new Example_15_1(a) );
    }
    for (int a = 0; a < size; a++)
    {
        threads[a].start();
    }
		System.out.println("Main thread execution completes");
	}
}
