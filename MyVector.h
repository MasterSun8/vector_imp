class MyVector{
    private:
        unsigned int size;
        int* tablica;
    public:
        MyVector(unsigned int size=0){
            this.size = size;
            *tablica = new int[this.size]
        }
        int vectorSize(){
            return this.size;
        }
        
}