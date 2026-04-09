//Marshon Sellers

#include <iostream>
#include <iomanip>

using namespace std;
class Trip 
{
private:
    float distance_km;
    float rate_per_km;

public:
    Trip() 
{
        distance_km = 0;
        rate_per_km = 12.5f;
    }

    void set_distance_km(float d) 
{
        if (d >= 0) 
        {
            distance_km = d;
        } else 
        {
            cout << "Invalid distance!" << endl;
        }
    }

    void set_rate_per_km(float r) 
        {
            if (r > 0) 
        {
            rate_per_km = r;
        } 
        else 
        {
            cout << "Invalid rate!" << endl;
        }
    }

    float get_fare() 
{
        return distance_km * rate_per_km;
    }
};

int main() 
{
    Trip myTrip;
    float d, r;

    cin >> d >> r;

    myTrip.set_distance_km(d);
    myTrip.set_rate_per_km(r);

    cout << fixed << setprecision(2);
    cout << "Fare: " << myTrip.get_fare() << endl;

    return 0;
}
