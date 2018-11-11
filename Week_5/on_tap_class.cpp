class Complex {
    double a, b;
public:
    Complex(double a_ = 0, double b_ = 0);
    friend ostream& operator<<(ostream& os, const Complex& f);
    Complex operator+(const Complex& f) const;
    Complex operator-(const Complex& f) const;
    Complex operator*(const Complex& f) const;
    Complex operator/(const Complex& f) const;
    double modulus() const;
    bool operator>(const Complex& f) const;
    bool operator<(const Complex& f) const;
};

Complex::Complex(double a_, double b_)
{
    a = a_;
    b = b_;
}
Complex Complex::operator+(const Complex& f) const
{
    Complex c;
    c.a = this->a + f.a;
    c.b = this->b + f.b;
    return c;
}
Complex Complex::operator-(const Complex& f) const
{
    Complex c;
    c.a = this->a - f.a;
    c.b = this->b - f.b;
    return c;
}
Complex Complex::operator*(const Complex& f) const
{
    Complex c;
    c.a = this->a * f.a - this->b * f.b;
    c.b = this->a*f.b + this->b*f.a;
    return c;
}
Complex Complex::operator/(const Complex& f) const
{
    Complex c;
    c.a = (this->a*f.a+f.b*this->b)/(pow(f.a,2)+pow(f.b,2));
    c.b = (this->b*f.a-this->a*f.b)/(pow(f.a,2)+pow(f.b,2));
    return c;
}

double Complex::modulus() const
{
    double c;
    c = sqrt(pow(this->a,2)+pow(this->b,2));
    return c;
}

ostream& operator<<(ostream& os, const Complex& f)
{
    if(f.b>0)
    {
        if(f.a==0)
        {
            os<<f.b <<"i";
        }
        else
        {
            os<<f.a<<"+"<<f.b<<"i";
        }
    }
    else if(f.b==1)
    {
        os << f.a "+" <<f.b<<"i";
    }
    else if(f.b==-1)
    {
        os << f.a "-" <<-f.b<<"i";
    }
    else
    {
        double c = -f.b;
        if(f.a==0 && f.b==0)
        {
            os << "0";
        }
        else if(f.a==0)
        {
            os <<"-"<<c<<"i";
        }
        else
        {
            os<<f.a<<"-"<<c<<"i";
        }
    }
    return os;
}
