class Queue{
    public:
        Queue();
        ~Queue();
        bool Empty();
        bool Full();
        // bool full ();
        void Append(int x);
        void Serve(int &x);
        void Clear();
        int Size();
        void Front(int &x);
        void Rear(int &x);
    
    private:
        struct QueueNode{
            int Entry;
            QueueNode *NextNode;
        };

        typedef QueueNode* QeuePointer;
        QueuePointer head;
        QueuePointer tail;
        int count;
}