# Static YSWS KiCad Library

Custom KiCad symbols and footprints used throughout the Static YSWS tutorial. 

## Installation

### 1. Download the repository
Clone it, or download as a ZIP and unzip it somewhere on your computer:

```bash
git clone https://github.com/Outdatedcandy92/Static-KiCAD-Library.git
```

### 2. Set the `STATIC_LIB` environment variable in KiCad
This lets KiCad find the library no matter where you put the folder, and keeps paths portable if you move or share the project.

1. Open KiCad
2. Go to **Preferences → Configure Paths**
3. Click **+** to add a new path variable
4. Set the name to `STATIC_LIB`
5. Set the path to the folder you downloaded in step 1

### 3. Add the symbol library
1. Go to **Preferences → Manage Symbol Libraries**
2. Click **+** to add a new library
3. Give it a nickname (e.g. `Static`)
4. Set the library path to `Static_Symbol_Library.kicad_sym` inside the repo folder
5. Save

### 4. Add the footprint library
1. Go to **Preferences → Manage Footprint Libraries**
2. Click **+** to add a new library
3. Give it a nickname (e.g. `Static`)
4. Set the library path to the `Static.pretty` folder inside the repo
5. Save

### 5. You're done!
Restart KiCad if the new library doesn't show up right away. You should now see the Static parts available in the symbol and footprint choosers when placing components.

## Verifying the install

Open the symbol chooser (`Add Symbol` in the schematic editor) and search for a part like `RDA5807M`. If it shows up under your Static library nickname, you're good to go.

## Troubleshooting

- **Library doesn't appear:** Double-check the `STATIC_LIB` path in Configure Paths. It should point to the folder itself, not a file inside it.
- **Symbols show up but footprints are missing:** Make sure both the symbol library (step 3) and the footprint library (step 4) were added. They're separate steps in KiCad.
- **"File not found" errors:** Confirm you're using the `STATIC_LIB` variable in the library path (e.g. `${STATIC_LIB}/Static_Symbol_Library.kicad_sym`) rather than a hardcoded absolute path, so it works even if you move the project.

## Questions

Ask in **#static** on the Hack Club Slack if you get stuck.
