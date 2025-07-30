#define BUTTON_PIN 3
static const char* mod = "main.c";

void app_main()
{
    ESP_LOG(mod,"startup");
    init_camera();
    init_sdcard();
    err = init_sdcard();
    if (err != ESP_OK)
    {
        printf("err: %s\n", esp_err_to_name(err));
        return;
    }

    err = init_camera();
    if (err != ESP_OK)
    {
        printf("err: %s\n", esp_err_to_name(err));
        return;
    }
    
/*    err = init_button_isr();
    if (err != ESP_OK)
    {
        printf("err: %s\n", esp_err_to_name(err));
        return;
    }*/

    printf("Everything is initialized successfully - Press Push button to take Picture\n");
}