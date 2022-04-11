class MyVector{
    private:
        unsigned int size;
        int* tablica;
    public:
        MyVector(unsigned int _size);
        int vectorSize();
        void printVector();
        void pushBack(int);
};