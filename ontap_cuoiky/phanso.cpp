class Fraction {
    int a, b;
public:
    Fraction(int a = 1, int b = 1);
    friend ostream& operator<<(ostream& os, const Fraction& f);
    Fraction operator+(const Fraction& f) const;
    Fraction operator-(const Fraction& f) const;
    Fraction operator*(const Fraction& f) const;
    Fraction operator/(const Fraction& f) const;
    void simplify();
    bool operator>(const Fraction& f) const;
    bool operator<(const Fraction& f) const;
};

Fraction::Fraction(int a, int b)
{
    this->a = a;
    this->b = b;
}
void Fraction::simplify()
{
    int a = this->a;
    int b = this->b;
    while(a != b)
    {
        if(a > b) a = a - b;
        else b = b - a;
    }
    this->a = this->a / a;
    this->b = this->b / a;
}
ostream& operator<<(ostream& os, const Fraction& f)
{
    f.simplify();
    if(f.b != 0) os << f.a << "/" << f.b;
    else os << "invalid";
    return os;
}
Fraction Fraction::operator+(const Fraction& f) const
{
    Fraction p;
    p.a = this->a*f.b + f.a * this->b;
    p.b = this->b * f.b;
    return p;
}
Fraction Fraction::operator-(const Fraction& f) const
{
    Fraction p;
    p.a = this->a*f.b - f.a * this->b;
    p.b = this->b * f.b;
    return p;
}
Fraction Fraction::operator*(const Fraction& f) const
{
    Fraction p;
    p.a = this->a * f.a;
    p.b = this->b * f.b;
    return p;
}
Fraction Fraction::operator/(const Fraction& f) const
{
    Fraction p;
    p.a = this->a * f.b;
    p.b = this->b * f.a;
    return p;
}
bool Fraction::operator>(const Fraction& f) const
{
    double x = this->a / (double)this->b;
    double y = f.a /(double)f.b;
    if(x>y ) return true;
    return false;
}
bool Fraction::operator<(const Fraction& f) const
{
    double x = this->a / (double)this->b;
    double y = f.a /(double)f.b;
    if(x<y ) return true;
    return false;
}
