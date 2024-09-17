// arquivo de definição da classe stack
//definir o tamanho maximo da pila

const int MaxStackSize = 100;
class Stack{
    // *metodos* /
    // construtor
        Stack();
    // destruicao
        ~Stack(); 
    // status
        bool FULL();
        bool EMPTY();
    // operações basicas
        void push (int x);
        void pop (int &x);
    // outras operações (clear, top, size)
        int size();
        void Clear();
        void Top(int &x);
// * Campos de dados */
private:
    int entry[MaxStackSize + 1];
    int top;

};