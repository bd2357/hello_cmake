
// example wrapper class that wraps a variable remembers an associated name
// after assignment. This is like a pair but the meta is just associated

template <class T, class M>
class MyMetaWrapper {
public:
    // construct with wrapped type and the meta value	
    MyMetaWrapper(const T& value, const M& meta):value(value), meta(meta) {}
    // conversion operator back to original type, meta is thrown away
    operator T() const {return value;}
    // conversion to return as a pair
    operator std::pair<T,M>() {return std::make_pair(value,meta);}
    // assigment only changes wrapped type not meta
    MyMetaWrapper& operator =(const T& value) 
    {
	    this->value = value; 
	    return *this;
    }
    // get original meta which is const
    const M& getMeta() const {return meta;}

private:
    T value;
    const M meta;
};

// helper macro for marking the variable with its own name as string
#define MetaWrapper(type, name, init) \
	MyMetaWrapper< type, const std::string > name(init, #name)


