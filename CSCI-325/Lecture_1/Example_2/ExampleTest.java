import java.util.Random;
public class ExampleTest
{
  final static int REPEATS = 10;
  private final static String[] firstNames = {"Sanjay", "Yunming", "John", "Vivek", "Shams", "Max"};
  private final static String[] lastNames = {"Chatterjee", "Zhang", "Smith", "Sarkar", "Imam", "Grossman"};

  private static Student[] generateStudentData()
  {
      final int N_STUDENTS = 20000000;
      final int N_CURRENT_STUDENTS = 6000000;

      Student[] students = new Student[N_STUDENTS];
      Random r = new Random(123);

      for (int s = 0; s < N_STUDENTS; s++)
      {
          final String firstName = firstNames[r.nextInt(firstNames.length)];
          final String lastName = lastNames[r.nextInt(lastNames.length)];
          final double age = r.nextDouble() * 100.0;
          final int grade = 1 + r.nextInt(100);
          final boolean current = (s < N_CURRENT_STUDENTS);

          students[s] = new Student(firstName, lastName, age, grade, current);
      }
      return students;
  }
  public static void main(String[] args)
  {
      Student[] students1 = generateStudentData();
      Student[] students2 = generateStudentData();
      Example example = new Example();
      //1
      final long startSequential1 = System.currentTimeMillis();
      for (int r = 0; r < REPEATS; r++)
      {
        double aaoespsS = example.averageAgeOfEnrolledStudentsImperative(students2);
      }
      final long endSequential1 = System.currentTimeMillis();

      final long startParallel1 = System.currentTimeMillis();
      for (int r = 0; r < REPEATS; r++)
      {
        double aaoesps = example.averageAgeOfEnrolledStudentsParallelStream(students1);
      }
      final long endParallel1 = System.currentTimeMillis();

      double t1 = (double)(endSequential1 - startSequential1);
      double t2 = (double)(endParallel1 - startParallel1);
      System.out.println("t1: "+t1+"; t2: "+t2);
      //2
      final long startSequential2 = System.currentTimeMillis();
      for (int r = 0; r < REPEATS; r++)
      {
        String mcfnoispsS = example.mostCommonFirstNameOfInactiveStudentsImperative(students2);
      }
      final long endSequential2 = System.currentTimeMillis();

      final long startParallel2 = System.currentTimeMillis();
      for (int r = 0; r < REPEATS; r++)
      {
        String mcfnoisps = example.mostCommonFirstNameOfInactiveStudentsParallelStream(students1);
      }
      final long endParallel2 = System.currentTimeMillis();

      t1 = (double)(endSequential2 - startSequential2);
       t2 = (double)(endParallel2 - startParallel2);
      System.out.println("t1: "+t1+"; t2: "+t2);
      //3
      final long startSequential3 = System.currentTimeMillis();
      for (int r = 0; r < REPEATS; r++)
      {
        int cnofsottpS = example.countNumberOfFailedStudentsOlderThan20Imperative(students2);
      }
      final long endSequential3 = System.currentTimeMillis();

      final long startParallel3 = System.currentTimeMillis();
      for (int r = 0; r < REPEATS; r++)
      {
        int cnofsottp = example.countNumberOfFailedStudentsOlderThan20ParallelStream(students1);
      }
      final long endParallel3 = System.currentTimeMillis();

      t1 = (double)(endSequential3 - startSequential3);
      t2 = (double)(endParallel3 - startParallel3);
      System.out.println("t1: "+t1+"; t2: "+t2);
  }
}
