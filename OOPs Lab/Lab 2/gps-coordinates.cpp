#include <iostream>
using namespace std;

class GPSCoordinates {
private:
    double latitude;
    double longitude;

public:
    // No-argument constructor
    GPSCoordinates() : latitude(0), longitude(0) {}

    // Two-argument constructor
    GPSCoordinates(double lat, double lon) : latitude(lat), longitude(lon) {}

    // Getter methods
    double getLatitude() const {
        return latitude;
    }

    double getLongitude() const {
        return longitude;
    }

    // Setter methods
    void setLatitude(double lat) {
        latitude = lat;
    }

    void setLongitude(double lon) {
        longitude = lon;
    }

    // Display method
    void display() const {
        cout << "(" << latitude << ", " << longitude << ")" << endl;
    }
};

int main() {
    GPSCoordinates location1;
    location1.display(); // Default coordinates

    location1.setLatitude(33.6844);
    location1.setLongitude(71.0975);
    cout << "Updated Location 1: ";
    location1.display();

    GPSCoordinates location2(33.6844, 73.0479);
    cout << "Location 2: ";
    location2.display();

    return 0;
}
