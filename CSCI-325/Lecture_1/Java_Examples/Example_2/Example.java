import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Example
{

  public double averageAgeOfEnrolledStudentsImperative(final Student[] studentArray)
  {
      List<Student> activeStudents = new ArrayList<Student>();

      for (Student s : studentArray)
      {
          if (s.checkIsCurrent())
          {
              activeStudents.add(s);
          }
      }
      double ageSum = 0.0;
      for (Student s : activeStudents)
      {
          ageSum += s.getAge();
      }

      return ageSum / (double) activeStudents.size();
  }

  public double averageAgeOfEnrolledStudentsParallelStream(final Student[] studentArray)
  {
      double averageAge = Stream.of(studentArray)
        .parallel()
        .filter(s -> s.checkIsCurrent())
        .mapToDouble(a -> a.getAge())
        .average()
        .getAsDouble();
        return averageAge;
  }

  public String mostCommonFirstNameOfInactiveStudentsImperative(final Student[] studentArray)
      {
      List<Student> inactiveStudents = new ArrayList<Student>();
      for (Student s : studentArray)
      {
          if (!s.checkIsCurrent())
          {
              inactiveStudents.add(s);
          }
      }

      Map<String, Integer> nameCounts = new HashMap<String, Integer>();

      for (Student s : inactiveStudents)
      {
          if (nameCounts.containsKey(s.getFirstName()))
          {
              nameCounts.put(s.getFirstName(), nameCounts.get(s.getFirstName()) + 1);
          }
          else
          {
              nameCounts.put(s.getFirstName(), 1);
          }
      }

      String mostCommon = null;
      int mostCommonCount = -1;
      for (Map.Entry<String, Integer> entry : nameCounts.entrySet())
      {
          if (mostCommon == null || entry.getValue() > mostCommonCount)
          {
              mostCommon = entry.getKey();
              mostCommonCount = entry.getValue();
          }
      }

      return mostCommon;
  }

  public String mostCommonFirstNameOfInactiveStudentsParallelStream(final Student[] studentArray)
  {
      String mcfnoisps = Stream.of(studentArray)
        .parallel()
        .filter(s -> !s.checkIsCurrent())
        .collect(Collectors.groupingBy(Student::getFirstName, Collectors.counting()))
        .entrySet()
        .stream()
        .parallel()
        .max(Map.Entry.comparingByValue())
        .get()
        .getKey();
        return mcfnoisps;
  }

  public int countNumberOfFailedStudentsOlderThan20Imperative(final Student[] studentArray)
  {
      int count = 0;
      for (Student s : studentArray)
      {
          if (!s.checkIsCurrent() && s.getAge() > 20 && s.getGrade() < 65)
          {
              count++;
          }
      }
      return count;
  }

  public int countNumberOfFailedStudentsOlderThan20ParallelStream(final Student[] studentArray)
  {
      int nofsottps = (int)Arrays.stream(studentArray)
        .parallel()
        .filter(s -> !s.checkIsCurrent() && s.getAge() > 20 && s.getGrade() < 65)
        .count();
      return nofsottps;
  }
}
