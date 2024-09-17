class OrderedList{
public:
    OrderedList();
    ~OrderedList();
    bool Empty();
    void Insert (int x);
    void Delete(int x);
    int Size();
    void Clear();
    int Search (int x); //retorna - se o elemento nao ocorrer na lista 
    //senao ele retorna a posicao da primeira ocorrencia 
private:
    struct ListNode{
        int Entry
        ListNode *NextNode;
    };

};