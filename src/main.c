#include "esp_ota_ops.h"
#include "FreeRTOS/freertos.h"
#include "FreeRTOS/task.h"

// 打印编译时间和版本信息
#

void app_main() {
    while(1)
    {
        printf("Hello World!\n");
        vTaskDelay(50);
    }
}