//import java.util.Random;
import java.util.concurrent.ForkJoinPool;

public class ExampleTest
{
  public static int SIZE = 200000000;

  public static double[] getArray()
  {
    double[] array = new double[SIZE];
    for(int a = 0; a < SIZE; a++)
    {
      array[a] = (a + 1);
    }
    /*
    final Random rand = new Random(314);
    for(int a = 0; a < SIZE; a++)
    {
      array[a] = rand.nextInt(100);
      if (array[a] == 0.0)
      {
          a--;
      }
    }
    */
    return array;
  }

  public static void main(String[] args)
  {
    double[] array = getArray();
    Example example = new Example();

    //System.out.println("Available Proceccors: "+Runtime.getRuntime().availableProcessors());
    System.setProperty("java.util.concurrent.ForkJoinPool.common.parallelism", "4");
    //System.out.println("get parallelism = " +ForkJoinPool.commonPool().getParallelism());

    double sum1 = example.getSequentialSum(array);
    double sum2 = example.getParallelSumAction(array);
    double sum3 = example.getParallelSumTask(array);

  }
}
