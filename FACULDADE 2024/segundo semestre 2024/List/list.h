const int MaxList =100;


class list{
public:
    list();
    ~list();
    bool empty();
    bool full();
    void insert(int x, int p);
    void Delete(int &x, int p);
    int size();
    void clear();
    void retrieve(int &x, int p);
    void replace(int x, int p);
private:
    int entry[MaxList + 1];
    int count;
};