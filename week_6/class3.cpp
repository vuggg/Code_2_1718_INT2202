class Vector {
    double x_, y_;
public:
    Vector(double x = 0, double y = 0);  // đã làm ở bài trước
    void print(int precision = 2, bool newLine = true); // đã làm ở bài trước
    void truncate(double length);
    bool isOrtho(const Vector& v) const;
    static float dot(const Vector& v1, const Vector& v2);
    static float cross(const Vector& v1, const Vector& v2);
    friend ostream& operator<<(ostream& os, const Vector& v);
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

void Vector::truncate(double length)
{
    this->x_ = this->x_ - length;
    this->y_ = this->y_ - length;
}
bool Vector::isOrtho(const Vector& v) const
{
    double x = this->x_*v.x_ + this->y_*v.y_;
    if(x==0) return true;
    return false;
}
float Vector::dot(const Vector& v1, const Vector& v2)
{
    float x = v1.x_*v2.x_ + v1.y_*v2.y_;
    return x;
}
Vector Vector::cross(const Vector& v1, const Vector& v2)
{
    float x = v1.x_*v2.y_ + v1.y_*v2.x_;
    return x;
}
ostream& operator<<(ostream& os, const Vector& v)
{
    os <<"(" <<v.x_<<", "<<v.y_<<")";
}
