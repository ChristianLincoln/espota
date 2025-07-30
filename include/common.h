#define LOG_LOCAL_LEVEL ESP_LOG_VERBOSE
#include "esp_log.h"

#include <esp_system.h>
#include <nvs_flash.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static void error();
static bool camera_working;
static void init_camera(framesize_t framesize, int quality);
static void init_sdcard(void);

{
    printf("err: %s\n", esp_err_to_name(err));
}