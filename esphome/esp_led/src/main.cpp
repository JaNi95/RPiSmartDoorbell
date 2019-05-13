// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  App.set_name("esp_led");
  App.set_compilation_datetime(__DATE__ ", " __TIME__);
  LogComponent *logcomponent = App.init_log(115200, 512, UART_SELECTION_UART0);
  WiFiComponent *wificomponent = App.init_wifi();
  wificomponent->set_use_address("esp_led.local");
  WiFiAP wifiap = WiFiAP();
  wifiap.set_ssid("DolenjcInStajerc");
  wifiap.set_password("stanovanje744");
  wificomponent->add_sta(wifiap);
  OTAComponent *otacomponent = App.init_ota();
  otacomponent->start_safe_mode();
  api::APIServer *api_apiserver = App.init_api_server();
  switch_::GPIOSwitch *simple_led_light = App.make_gpio_switch("Simple LED light", 13);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
