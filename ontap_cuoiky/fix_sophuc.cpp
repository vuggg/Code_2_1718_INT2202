class Complex {
    double a, b;
public:
    Complex(double a = 0, double b = 0);
    friend ostream& operator<<(ostream& os, const Complex& f);
    Complex operator+(const Complex& f) const;
    Complex operator-(const Complex& f) const;
    Complex operator*(const Complex& f) const;
    Complex operator/(const Complex& f) const;
    double modulus() const;
    bool operator==(const Complex& f) const;
    bool operator!=(const Complex& f) const;
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
    c.a = this->a*f.a - this->b * f.b;
    c.b = this->a * f.b + this->b * f.a;
    return c;
}
Complex Complex::operator/(const Complex& f) const
{
    Complex c;
    c.a = (this->a*f.a - this->b * f.b ) / (  f.a*f.a + f.b*f.b);
    c.b =( this->a * f.b + this->b * f.a) / ( f.a*f.a + f.b*f.b);
    return c;
}

double Complex::modulus() const
{
    double c;
    c = sqrt(pow(this->a,2)+pow(this->b,2));
    return c;
}

bool Complex::operator==(const Complex& f) const
{
    if(this->a == f.a && this->b == f.b ) return true;
    return false;
}
bool Complex::operator!=(const Complex& f) const
{
    if(this->a != f.a || this->b == f.b ) return true;
    return false;
}
ostream& operator<<(ostream& os, const Complex& f)
{
    if(f.a==0)
    {
        if(f.b==0)
        {
            os <<"0";
            return os;
        }
        os << f.b <<"i";
    }
    else
    {
        if(f.b<0)
        {
            os << f.a <<"-"<<-f.b <<"i";
        }
        else if(f.b==0)
        {
            os << f.a;
        }
        else if(f.b==-1)
        {
            os << f.a <<"-"<<"i";
        }
        else if(f.b==1)
        {
            os << f.a <<"+"<<"i";
        }
        else
        {
            os << f.a <<"+"<<f.b <<"i";
        }
    }
    return os;
}


