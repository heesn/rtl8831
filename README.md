# RTL88X1
### Realtek Linux driver for USB AX900 Wifi 6 devices 8851bu and 8831bu

This is for generic USB AX900 realtek devices that use the Realtek 8851bu or 8831bu chipsets.

Examples include: 
pTIME AX900UA
Comfast AX900 CF-943F

This includes unbranded AX900 USB WiFi 6 Bluetooth 5.3 Adapters sold on AliExpress and Amazon
Example: https://www.aliexpress.us/item/3256807263559115.html

### To install: 
```bash
make
```
```bash
sudo make install
```

You will have to reinstall for any kernel updates.
```bash
make clean
```
```bash
make
```
```bash
sudo make install
```

### Switch the USB Dongle Mode
By default, USB Wi-Fi dongles are in Driver CDROM Mode, which is incorrect for proper Wi-Fi usage. You need to switch the device to Wi-Fi Mode using usb-modeswitch.

Install usb-modeswitch:
```bash
sudo apt-get install usb-modeswitch
```

Use lsusb to find the Vendor ID and Product ID of your wireless dongle:
```bash
lsusb
```

Example output:
```
Bus 002 Device 003: ID 0bda:1a2b Realtek Semiconductor Corp. RTL8188GU 802.11n WLAN Adapter (Driver CDROM Mode)
```

In this example:
Vendor ID: 0bda
Product ID: 1a2b
Use usb-modeswitch to switch the device mode. Replace 0bda and 1a2b with your specific Vendor ID and Product ID:
```bash
sudo usb_modeswitch -K -v 0bda -p 1a2b
```

### Reload the Driver
After switching the mode, reload the driver with:
```bash
sudo modprobe 8851bu
```
or
```bash
sudo modprobe 8851bu
```

### Verify Wi-Fi Device is Active
Check if the Wi-Fi interface is recognized:
```bash
iwconfig
```
If the device is still not active, check the kernel logs for any errors related to the driver:
```bash
sudo dmesg | grep 8851bu
```
