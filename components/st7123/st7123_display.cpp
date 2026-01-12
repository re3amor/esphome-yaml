#include "st7123_display.h"
#include "esphome/core/log.h"

#include "driver/mipi_dsi.h"

namespace esphome {
namespace st7123 {

class ST7123Display : public display::DisplayBuffer, public Component {


void ST7123Display::setup() {
  ESP_LOGI(TAG, "ST7123 setup start");

  // TODO: MIPI DSI 初期化（ここが人柱ゾーン）
  // 今はログだけ出して「生きてる」確認

  ESP_LOGI(TAG, "ST7123 setup done");
}

void ST7123Display::update() {
  // 今は何もしない
}

void ST7123Display::dump_config() {
  ESP_LOGCONFIG(TAG, "ST7123 Display:");
  ESP_LOGCONFIG(TAG, "  Resolution: 720x1280");
}

}  // namespace st7123
}  // namespace esphome

