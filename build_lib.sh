#!/bin/zsh

rm -rf libs/iOS/
rm -rf libs/macOS/
rm -rf libs/Linux/
mkdir -p libs/iOS
mkdir -p libs/macOS
mkdir -p libs/Linux

./gradlew clean assemble && \
cp -R kmpp/build/bin/ios/debugFramework/kmpp.framework libs/iOS/ && \
cp -R kmpp/build/bin/macos/debugFramework/kmpp.framework libs/macOS/ && \
cp kmpp/build/bin/linux/debugShared/libkmpp.so libs/Linux/ && \
cp kmpp/build/bin/linux/debugShared/libkmpp_api.h libs/Linux/
