// Autostart
#include <stdlib.h>

int main() {
  system("pipewire");
  system("pipewire-pulse");
  system("wireplumber");
  system("wlr-randr --output HDMI-A-1 --mode 1366x768");
}
