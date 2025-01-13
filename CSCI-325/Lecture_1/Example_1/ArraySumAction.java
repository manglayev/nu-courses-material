import java.util.concurrent.RecursiveAction;
import java.util.concurrent.ForkJoinPool;

public class ArraySumAction extends RecursiveAction
{
  int start;
  int end;
  double [] array;
  double sum;
  public static int SEQUENTIAL_THRESHOLD = 100;
  ArraySumAction(int start, int end, double[] array)
  {
    this.start = start;
    this.end = end;
    this.array = array;
  }

  public double getSum()
  {
    return sum;
  }

  @Override
  protected void compute()
  {
    if(end - start <= SEQUENTIAL_THRESHOLD)
    {
      for(int a = start; a < end; a++)
      {
        sum += 1 / array[a];
      }
    }
    else
    {
      ArraySumAction left = new ArraySumAction(start, (start + end)/2, array);
      ArraySumAction right = new ArraySumAction((start + end)/2, end, array);
      left.fork();
      right.compute();
      left.join();
      sum = left.getSum() + right.getSum();
    }
  }
}