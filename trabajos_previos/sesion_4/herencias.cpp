class Base{
    public:
        int x;
    protected:
        int y;
    private:
        int z;
};

class PublicDerived: public Base{
    //  x is public
    //  y is protected
    //  z is not accesible from PublicDerived
};
class ProtectedDerived: protected Base{
    //  x is protected
    //  y is protected
    //  z is not accesible from ProtectedDerived
};
class PrivateDerived: private Base{
    //  x is Private
    //  y is Private
    //  z is not accesible from PrivateDerived
};
