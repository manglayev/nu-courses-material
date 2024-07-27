#include <ostream>

class safe_int_array
{
  size_t size;
  int* values;

  public:
    //Default constructor
    safe_int_array();
    //Creates a fresh int array of given size
    safe_int_array(size_t sz);

    //Copy constructor
    safe_int_array(const safe_int_array& other);

    //Assignment
    safe_int_array& operator=(const safe_int_array& other);

    //Value getter - throws exception if index is bad
    int get_value(size_t index) const;

    //Value setter - throws exception if index is bad
    void set_value(size_t index, int value);

    //Gets the size of the array
    int get_size() const;

    //Prints the array to the given output
    void print(std::ostream& out) const;

    //Destructor
    ~safe_int_array();
};
