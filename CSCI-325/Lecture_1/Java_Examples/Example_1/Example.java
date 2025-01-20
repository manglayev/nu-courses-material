import java.util.concurrent.ForkJoinPool;

public class Example
{
  public double getParallelSumAction(double array[])
  {
    long startTime = System.nanoTime();
    ArraySumAction ast = new ArraySumAction(0, array.length, array);
    //this way
    //play with the number of threads
    //ForkJoinPool pool = new ForkJoinPool(4);
    //pool.invoke(ast);
    //or this way
    ForkJoinPool.commonPool().invoke(ast);
    double sum = ast.getSum();
    long endTime = System.nanoTime() - startTime;
    printResults("  Parallel Action", endTime, sum);
    return sum;
  }

  public double getParallelSumTask(double array[])
  {
    long startTime = System.nanoTime();
    ArraySumTask ast = new ArraySumTask(0, array.length, array);
    //this way
    //play with the number of threads
    //ForkJoinPool pool = new ForkJoinPool(4);
    //pool.invoke(ast);
    //or this way
    double sum = ForkJoinPool.commonPool().invoke(ast);
    long endTime = System.nanoTime() - startTime;
    printResults("  Parallel Task", endTime, sum);
    return sum;
  }

  public double getSequentialSum(double[] array)
  {
    long startTime = System.nanoTime();
    double sum = 0;
    for(int a = 0; a < array.length; a++)
    {
      sum += 1 / array[a];
    }
    long endTime = System.nanoTime() - startTime;
    printResults("Sequential", endTime, sum);
    return sum;
  }

  public void printResults(String type, double time, double sum)
  {
    System.out.printf("%s computation in %8.3f ms. sum = %8.9f \n", type, time / 1e6, sum);
  }

}
