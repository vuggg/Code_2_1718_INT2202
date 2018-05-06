class Vector {
    double x_, y_;
public:
    Vector(double x = 0, double y = 0);
    void print(int precision = 2, bool newLine = true);
    Vector& operator=(const Vector& v);
    Vector operator+(const Vector& v) const;
    Vector operator-(const Vector& v) const;
    Vector& operator+=(const Vector& v);
    Vector& operator-=(const Vector& v);
};

Vector::Vector(double x, double y)
{
    x_ = x;
    y_ = y;
}
void Vector::print(int precision , bool newLine)
{
    cout << fixed << setprecision(precision)<<"(" << x_;
    cout << ", ";
    cout << fixed << setprecision(precision) << y_ << ")";
    if(newLine)
    {
        cout << endl;
    }
}
Vector& Vector::operator=(const Vector& v)
{
    this->x_ = v.x_;
    this->y_ = v.y_;
    return *this;
}
Vector Vector::operator+(const Vector& v) const
{
    Vector p;
    p.x_ = this->x_ + v.x_;
    p.y_ = this->y_ + v.y_;
    return p;
}
Vector Vector::operator-(const Vector& v) const
{
    Vector p;
    p.x_ = this->x_ - v.x_;
    p.y_ = this->y_ - v.y_;
    return p;
}
Vector& Vector::operator+=(const Vector& v)
{
    this->x_ = this->x_ + v.x_;
    this->y_ = this->y_ + v.y_;
    return *this;
}
Vector& Vector::operator-=(const Vector& v)
{
    this->x_ = this->x_ - v.x_;
    this->y_ = this->y_ - v.y_;
    return *this;
}
