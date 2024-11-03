    #include<iostream>
    using namespace std;
    class hero{
        public:
            hero()
            {cout<<"inside hero class"<<endl;}
    };
    int main()
    {
        hero ramesh;// statically allocated
        hero *h= new hero;//dynamically call
        
    }