# nice-view-fairyboard

Created for use with the [fairyboard](https://github.com/Shtaiven/restive-engines-keyboards?tab=readme-ov-file#fairyboard) with its [ZMK config](https://github.com/Shtaiven/restive-engines-zmk-config).

Modified from [nice-shield-base](https://github.com/whoop-t/nice-shield-base).

> [!IMPORTANT]
> This repo is only for nice!views and zmk with zephyr modules. This will NOT work for OLED/qmk setups.
> Since this is a zephyr module, the shield repo is hosted on github and can be used by anyone.

## Adding this module to your ZMK config

Add this remote repo to `west.yaml`

```yaml
manifest:
  remotes:
    - name: zmkfirmware
      url-base: https://github.com/zmkfirmware
    - name: Shtaiven #new entry
      url-base: https://github.com/Shtaiven #new entry
  projects:
    - name: zmk
      remote: zmkfirmware
      revision: main
      import: app/west.yml
    - name: nice-view-fairyboard #new entry
      remote: Shtaiven #new entry
      revision: main #new entry
  self:
    path: config
```

Add your module to `build.yaml`(this is for fairyboard, but change for your keyboard if needed)

```yaml
include:
  - board: nice_nano_v2
    shield: fairyboard nice_view_adapter nice_view_fairyboard #update entry
```

Also make sure to enable the custom status screen in your ZMK configuration, this would be your keyboards .conf file in the config directory:

```
CONFIG_ZMK_DISPLAY=y
CONFIG_ZMK_DISPLAY_STATUS_SCREEN_CUSTOM=y
```

Now flash your board and you should see a customized fairyboard display on your nice!view.

## Add images

Follow these steps with your 1-bit image art. Images must be 80x69.

> [!IMPORTANT]
> ART MUST BE 80x69
>
> You can alter this in the code where you define your image so you can technically change this and make your art a different size, but this is the size I have found to be the best while keeping other information like battery etc

### Rotate your image

This is a horizontal display so you need to rotate the image 90 degrees to the right

I just use [iloveimg](https://www.iloveimg.com/rotate-image), but feel free to use anything. Just make sure you are rotating it 90 degrees to the right

### Image to code conversion

Take your 1-bit art that you created or found and upload it to
[image2cpp](https://javl.github.io/image2cpp/)

The only option you need to change is `Code output format`, make sure its set to `Plain bytes`

Then click `Generate Code`
You will see the code, copy everything in the textfield

## Paste to code in repo

Depending on the image you are setting, you will need to update one of the following files:
1. `assests/left_image.c` (for your left half)
2. `assests/right_image.c` (for your right half)

You should see bytes already there, as well as a comments in the code above and below the bytes.

Replace the bytes with your bytes from the conversion

```c
  // REPLACE THESE BYTES
  ...
  ...
  // END
```

Save the file

Thats it! Repeat for your other side if needed
