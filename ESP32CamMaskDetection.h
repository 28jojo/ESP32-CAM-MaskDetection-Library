#ifndef ESP32CAMMASKDETECTION_H
#define ESP32CAMMASKDETECTION_H

#include "esp_camera.h"
#include <WiFi.h>

class ESP32CamMaskDetection {
  public:
    void begin(const char* ssid, const char* password);
    void startStreaming();
    bool detectMask();
  
  private:
    void setupCamera();
};

#endif
