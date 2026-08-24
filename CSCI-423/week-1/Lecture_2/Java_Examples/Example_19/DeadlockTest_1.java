public class DeadlockTest_1
{
    static Object lock1 = new Object();
    static Object lock2 = new Object();
    public static void main(String args[])
    {
        Thread thread1 = new Thread()
        {
            public void run()
            {
                synchronized(lock1)
                {
                    System.out.println("Thread-1 blocks lock-1");
                    try
                    {
                        Thread.sleep(2);
                    }
                    catch(Exception exception)
                    {
                        System.out.println("exception 1");
                    }
                    System.out.println("Thread-1 is waiting for lock-2");
                    System.out.println("Thread-1 needs lock-2 in order to release lock-1");
                    synchronized(lock2)
                    {
                        System.out.println("Thread-1 blocks lock-1 and lock-2");
                    }
                }
            }
        };
        Thread thread2 = new Thread()
        {
            public void run()
            {
                synchronized(lock2)
                {
                    System.out.println("Thread-2 blocks lock-2");
                    try
                    {
                        Thread.sleep(2);
                    }
                    catch(Exception exception)
                    {
                        System.out.println("exception-1");
                    }
                    System.out.println("Thread-2 is waiting for lock-1");
                    System.out.println("Thread-2 needs lock-1 in order to release lock-2");
                    synchronized(lock1)
                    {
                        System.out.println("Thread-2 blocks lock-2 and lock-1");
                    }
                }
            }
        };
        thread1.start();
        thread2.start();
    }
}
