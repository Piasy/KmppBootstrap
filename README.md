# KmppBootstrap

Bootstrap project for multi-platform development with Kotlin multi-platform.

## Setup Xcode project

After install [XcodeGen](https://github.com/yonaskolb/XcodeGen), run `./setup_xcode_project.sh`.

## Build library

iOS, macOS, and Linux:

```bash
./build_lib.sh
```

Windows (in the `x64 Native Tools Command Prompt` console):

```batch
.\build_lib.bat
```

Android: no need to build library manually, just open the project in Android Studio and
run AndroidExample.

## Caveat

WindowsExample will encounter compilation error when it's located in macOS file system
and shared to Parallels Desktop Windows virtual machine, so you should clone them into Windows file system.
