#include <iostream>
#include  <string>
using namespace std;

class Camera
{
public:
    int camera_megapixels;
};

class MusicPlayer
{
public:
    int speaker_power;
};

class SmartPhone : public Camera, public MusicPlayer
{
public:
    string brand_name;
};

int main()
{
    SmartPhone phone_object;

    getline(cin, phone_object.brand_name);
    cin >> phone_object.camera_megapixels;
    cin.ignore();
    cin >> phone_object.speaker_power;

    cout << "Brand: " << phone_object.brand_name << endl
        << "Camera: " << phone_object.camera_megapixels << " MP" << endl
        << "Speaker Power: " << phone_object.speaker_power << " W" << endl;

    return 0;
}
