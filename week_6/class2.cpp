class Vector {
    double x_, y_;
public:
    Vector(double x = 0, double y = 0);  // đã làm ở bài 1
    void print(int precision = 2, bool newLine = true); // đã làm ở bài 1
    Vector operator+(double s) const;
    Vector operator-(double s) const;
    Vector operator*(double s) const;
    Vector operator/(double s) const;
    Vector& operator+=(double s);
    Vector& operator-=(double s);
    Vector& operator*=(double s);
    Vector& operator/=(double s);
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
Vector Vector::operator+(double s) const
{
    Vector p;
    p.x_ = this->x_ + s;
    p.y_ = this->y_ + s;
    return p;
}
Vector Vector::operator-(double s) const
{
    Vector p;
    p.x_ = this->x_ - s;
    p.y_ = this->y_ - s;
    return p;
}
Vector Vector::operator*(double s) const
{
    Vector p;
    p.x_ = this->x_ * s;
    p.y_ = this->y_ * s;
    return p;
}
Vector Vector::operator/(double s) const
{
    Vector p;
    p.x_ = this->x_ / s;
    p.y_ = this->y_ / s;
    return p;
}

Vector& Vector::operator+=(double s)
{
    this->x_ = this->x_ + s;
    this->y_ = this->y_ + s;
    return *this;
}

Vector& Vector::operator-=(double s)
{
    this->x_ = this->x_ - s;
    this->y_ = this->y_ - s;
    return *this;
}
Vector& Vector::operator*=(double s)
{
    this->x_ = this->x_ * s;
    this->y_ = this->y_ * s;
    return *this;
}
Vector& Vector::operator/=(double s)
{
    this->x_ = this->x_ / s;
    this->y_ = this->y_ / s;
    return *this;
}
