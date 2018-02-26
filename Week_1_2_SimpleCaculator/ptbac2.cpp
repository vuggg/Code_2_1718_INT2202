#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
void tinhNghiemPhuc(double delta, int a, int b, int c);

void GiaiPhuongTrinhBac_1(float a, float b)
{
    if (a == 0)
    {
        if (b == 0)
            cout << "Phuong Trinh VSN";
        else
            cout << "Phuong Trinh VN";
    }
    else
    {
        float x = (float)-b / a;
        cout << x;
    }
}

void GiaiPhuongTrinhBac_2(float a, float b, float c)
{
    if (a == 0)
        GiaiPhuongTrinhBac_1(b, c);
    else
    {
        double delta = (float) ( b * b -  4 * a * c );
        if (delta < 0)
        {
        	tinhNghiemPhuc( delta,  a,  b,  c);
		}
        else
            if (delta == 0)
            {
                cout << (float)-b / (2 * a);
            }
            else
            {
                float x1 = (-b + sqrt(delta)) / (2 * a);
                float x2 = (-b - sqrt(delta)) / (2 * a);

                cout << fixed << setprecision(2) << x2 << "\n";
                cout << fixed << setprecision(2) << x1 << "\n";
            }
     
    }
}



int main()
{
    float a, b, c;
    cin >> a;

    cin >> b;

    cin >> c;

    GiaiPhuongTrinhBac_2(a, b, c);
} 

void tinhNghiemPhuc(double delta, int a, int b, int c)
{
	cout << -b/double(2*a)<< " " <<- sqrt(-(delta))/(2*a) << "\n";
	cout << -b/double(2*a) << " "<<+ sqrt(-(delta))/(2*a) << "\n";
}
