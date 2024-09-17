const int MaxQueue = 100;
class Queue{
    public:
        Queue();
        ~Queue();
        bool Full();
        bool Empty();
        void Append (int x); // metodo de insercao na fila 
        void Serve (int &x); // metodo de remocao da fila 
        void Front (int &x); // copia do elemento que esta em head
        void Rear (int &x); // copia do elemento que esta em tail
        int Size ();
        void Clear();
    private:
        int count;
        int head;
        int tail;
        int Entry[MaxQueue + 1];
};