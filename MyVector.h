class myVector{
    private:
        unsigned int size;
        int* tablica;
    public:
        myVector(unsigned int);
        int vectorSize();
        void printVector();
        void pushBack(int);
        void popBack();
        void insert(int, int);
        void remove(int);
        int at(int);
};