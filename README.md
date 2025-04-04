# nice-view-fairyboard

Created for use with the [fairyboard](https://github.com/Shtaiven/shockboard?tab=readme-ov-file#fairyboard) with its [ZMK config](https://github.com/Shtaiven/shockboard-zmk-config).

Modified from [whoop-t/nice-shield-base](https://github.com/whoop-t/nice-shield-base).

> [!IMPORTANT]
> This repo is only for nice!views and zmk with zephyr modules. This will NOT work for OLED/qmk setups.
> Since this is a zephyr module, the shield repo is hosted on github and can be used by anyone.

## Renaming

After you have the code, you will need to rename some items to make sure it gets picked up as a module when it is used

1. Rename ids/variables in the code

In `Kconfig.shield`, update `nice_shield_base` to your shield
This will be your repo name but with underscores

> [!IMPORTANT]
> Do NOT update `SHIELD_NICE_VIEW_SHIELD_BASE`, only `nice_shield_base` in the parenthesis
```
config SHIELD_NICE_VIEW_SHIELD_BASE
    def_bool $(shields_list_contains,nice_shield_base)
```

> [!IMPORTANT]
> `id:` should be hyphen case, eg if you repo is `your-repo`, make sure you use hyphens for the id

In `shields/nice_shield_base/nice_shield_base.zmk.yml` rename these to your repo name:
```yaml
id: nice-shield-base
name: nice!view_shield_base
```

In `zephyr/module.yml` rename this to your repo name:
```yaml
name: "zmk-shield-nice!view-your-repo"
```
> [!NOTE]
> I dont think this one matters, but I like to update it

2. Rename files
> [!IMPORTANT]
> Files should be underscore

- Rename `shields/nice_shield_base` to your repo name
- Rename `shields/nice_shield_base/nice_shield_base.conf` to your repo name
- Rename `shields/nice_shield_base/nice_shield_base.overlay` to your repo name
- Rename `shields/nice_shield_base/nice_shield_base.zmk.yml` to your repo name

## Test your repo!!!

After all the renaming and hooking up to your repo, test everything is working correctly by adding your new repo to your ZMK config.

The repo already has a base image that can be flashed and tested before adding your own art to make sure the steps were followed correctly.

### Add your new module to your ZMK config

Add your remote repo to `west.yaml`
```yaml
manifest:
  remotes:
    - name: zmkfirmware
      url-base: https://github.com/zmkfirmware
    - name: your-github-user #new entry
      url-base: https://github.com/your-github-user #new entry
  projects:
    - name: zmk
      remote: zmkfirmware
      revision: main
      import: app/west.yml
    - name: your-repo-name #new entry
      remote: your-github-user #new entry
      revision: main #new entry
  self:
    path: config
```

Add your module to `build.yaml`(this is for corne, but change for your keyboard if needed)
```yaml
include:
  - board: nice_nano_v2
    shield: corne_left nice_view_adapter your_repo_name #update entry
  - board: nice_nano_v2
    shield: corne_right nice_view_adapter your_repo_name #update entry
```

Also make sure to enable the custom status screen in your ZMK configuration, this would be your keyboards .conf file in the config directory:

```
CONFIG_ZMK_DISPLAY=y
CONFIG_ZMK_DISPLAY_STATUS_SCREEN_CUSTOM=y
```

Now flash your board and you should see the base image from this repo. If there is an issue, go back and walkthrough the steps again and make sure you did everything correctly.

## Create 1-bit art
> [!IMPORTANT]
> ART MUST BE 80x69
>
> You can alter this in the code where you define your image so you can technically change this and make your art a different size, but this is the size I have found to be the best while keeping other information like battery etc

> [!IMPORTANT]
> WIP
> TODO Add guide to create the pixel art

> [!IMPORTANT]
> WIP
> TODO Add guide to animations and set in repo

## Add images

> [!NOTE]
> If you want animations, you can skip to the animation section

> [!NOTE]
> This section also assumes you already have an image created from the previous step

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
