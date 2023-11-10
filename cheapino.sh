#!/usr/bin/env bash

set -x
set -e

## convert the json to keymap.c
qmk json2c ./keymap.json > ./keyboards/cheapino/keymaps/kzk/keymap.c

## add the headers to the keymap.c
string_to_prepend='#include "../../tap_dance.h"'
sed -i "1s|^|${string_to_prepend}\n|" ./keyboards/cheapino/keymaps/kzk/keymap.c
## flash

make cheapino:kzk:flash
