
// example wrapper class that wraps an int and remembers the previous value
// after assignment

template <class T>
class MyPrevWrapper {
public:
    MyPrevWrapper(const T& value):value(value), prev(0) {}
    MyPrevWrapper() :value(0), prev(0) {};
    operator T() const {return value;}
    MyPrevWrapper& operator =(const T& value) 
    {
	    this->prev = this->value;
	    this->value = value; 
	    return *this;
    }
    T getPrev() const {return prev;}

private:
    T value;
    T prev;
};
