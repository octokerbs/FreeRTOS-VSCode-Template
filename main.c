#include <FreeRTOS.h>
#include <task.h>
#include <stdio.h>

void led_task()
{
    for (;;)
    {
        printf("LED ON\n");
        vTaskDelay(100);

        printf("LED OFF\n");
        vTaskDelay(100);
    }
}

int main()
{
    xTaskCreate(led_task, "LED_Task", 256, NULL, 1, NULL);
    vTaskStartScheduler();

    for (;;)
    {
    }
}
