public class Main
{
    public static void main( String[] arg )
   {
     // construct the shared object
     SimpleArray sharedSimpleArray = new SimpleArray( 6 );

     // create two tasks to write to the shared SimpleArray
     ArrayWriter writer1 = new ArrayWriter(1, sharedSimpleArray);
     ArrayWriter writer2 = new ArrayWriter(11, sharedSimpleArray);

     Thread thread1 = new Thread(writer1);
     Thread thread2 = new Thread(writer2);
     thread1.start();
     thread2.start();

      try
      {
         // wait 1 minute for both writers to finish executing         
         thread1.sleep(6000);
         thread2.sleep(6000);
         boolean tasksEnded = thread1.getState().toString().equals("TERMINATED") && thread2.getState().toString().equals("TERMINATED");

         if ( tasksEnded )
            System.out.println( sharedSimpleArray ); // print contents
         else
            System.out.println(
               "Timed out while waiting for tasks to finish." );
      } // end try
      catch ( InterruptedException ex )
      {
         System.out.println(
            "Interrupted while waiting for tasks to finish." );
      } // end catch
   } // end main
}
