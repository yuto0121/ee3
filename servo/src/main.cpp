#include <Arduino.h>
#include <ESP32Servo.h>

Servo myServo;

void setup()
{
  myServo.attach(17);
}

void loop()
{
  for (int angle = 0; angle <= 180; angle += 1)
  {
    myServo.write(angle);
    delay(15);
  }

  for (int angle = 180; angle >= 0; angle -= 1)
  {
    myServo.write(angle);
    delay(15);
  }
}

// #include <stdio.h>
// #include <string.h>
// #include "freertos/FreeRTOS.h"
// #include "freertos/task.h"
// #include "freertos/queue.h"
// #include "freertos/event_groups.h"
// #include "esp_system.h"
// #include "esp_event.h"
// #include "esp_log.h"
// #include "nvs_flash.h"
// #include "esp_wifi.h"
// #include "esp_netif.h"
// #include "esp_websocket_server.h"
// #include "driver/uart.h"
// #include "esp_log.h"
