import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import display
from esphome.const import CONF_ID

st7123_ns = cg.esphome_ns.namespace("st7123")
ST7123Display = st7123_ns.class_("ST7123Display", display.DisplayBuffer)

CONFIG_SCHEMA = display.FULL_DISPLAY_SCHEMA.extend(
    {
        cv.GenerateID(): cv.declare_id(ST7123Display),
    }
)

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await display.register_display(var, config)
