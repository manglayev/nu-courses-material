public final class Student
{
    private final String firstName;
    private final String lastName;
    private final double age;
    private final int grade;
    private final boolean isCurrent;

    public Student
      (
        final String setFirstName,
        final String setLastName,
        final double setAge,
        final int setGrade,
        final boolean setIsCurrent
      )
    {
        this.firstName = setFirstName;
        this.lastName = setLastName;
        this.age = setAge;
        this.grade = setGrade;
        this.isCurrent = setIsCurrent;
    }

    public String getFirstName()
    {
        return firstName;
    }

    public String getLastName()
    {
        return lastName;
    }

    public double getAge()
    {
        return age;
    }

    public int getGrade()
    {
        return grade;
    }

    public boolean checkIsCurrent()
    {
        return isCurrent;
    }
}
