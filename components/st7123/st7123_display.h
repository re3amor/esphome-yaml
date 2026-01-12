#pragma once

#include "esphome/core/component.h"
#include "esphome/components/display/display_buffer.h"

namespace esphome {
namespace st7123 {

class ST7123Display : public display::DisplayBuffer, public Component {
 public:
  void setup() override;
  void update() override;
  void dump_config() override;

 protected:
  int get_width_internal() override { return 720; }
  int get_height_internal() override { return 1280; }
};

}  // namespace st7123
}  // namespace esphome
