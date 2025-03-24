#include <ESP32CamMaskDetection.h>

ESP32CamMaskDetection cam;

const char* ssid = "Your_WiFi_Name";
const char* password = "Your_WiFi_Password";

void setup() {
    Serial.begin(115200);
    cam.begin(ssid, password);
    cam.startStreaming();
}

void loop() {
    if (cam.detectMask()) {
        Serial.println("Unauthorized Person Detected (Mask Detected)");
    }
    delay(3000);
}
