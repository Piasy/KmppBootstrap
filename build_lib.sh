#!/bin/zsh

rm -rf libs/iOS/kmpp.framework
rm -rf libs/macOS/kmpp.framework
rm -f libs/Linux/libkmpp.so
rm -f libs/Linux/libkmpp_api.h
mkdir -p libs/iOS
mkdir -p libs/macOS
mkdir -p libs/Linux

./gradlew clean assemble && \
cp -R kmpp/build/bin/ios/debugFramework/kmpp.framework libs/iOS/
