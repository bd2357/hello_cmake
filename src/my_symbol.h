
// example wrapper class that wraps a variable remembers an associated name
// after assignment

template <class T, class M>
class MySymbolWrapper {
public:
    MySymbolWrapper(const T& value, const M& meta):value(value), meta(meta) {}
    operator T() const {return value;}
    MySymbolWrapper& operator =(const T& value) 
    {
	    this->value = value; 
	    return *this;
    }
    const M& getMeta() const {return meta;}

private:
    T value;
    const M meta;
};
