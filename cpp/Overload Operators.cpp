//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator + (const Complex &e,const Complex &f){
    Complex ans;
    ans.a = e.a + f.a;
    ans.b = e.b + f.b;
    return ans;
}

ostream& operator << (ostream &out, const Complex x){
    // int a=0;
    out << x.a << (x.b > 0 ? "+i" : "-i") << x.b;
    // out << x.a << '+i' << x.b;
    return out;
    // return out;
}
