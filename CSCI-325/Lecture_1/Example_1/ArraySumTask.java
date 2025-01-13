import java.util.concurrent.RecursiveTask;
import java.util.concurrent.ForkJoinPool;

public class ArraySumTask extends RecursiveTask<Double>
{
  int start;
  int end;
  double [] array;

  public static int SEQUENTIAL_THRESHOLD = 100;
  ArraySumTask(int start, int end, double[] array)
  {
    this.start = start;
    this.end = end;
    this.array = array;
  }

  @Override
  protected Double compute()
  {
    if(end - start <= SEQUENTIAL_THRESHOLD)
    {
      double sum = 0;
      for(int a = start; a < end; a++)
        sum += 1 / array[a];
      return sum;
    }
    else
    {
      ArraySumTask left = new ArraySumTask(start, (start + end)/2, array);
      ArraySumTask right = new ArraySumTask((start + end)/2, end, array);
      left.fork();
      double rightSum = right.compute();
      double leftSum = left.join();
      return leftSum + rightSum;
    }
  }
}