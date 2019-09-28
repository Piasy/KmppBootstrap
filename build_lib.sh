#!/bin/zsh

rm -rf libs/iOS/kmpp.framework
rm -rf libs/macOS/kmpp.framework
mkdir -p libs/iOS
mkdir -p libs/macOS

./gradlew clean assemble && \
cp -R kmpp/build/bin/ios/debugFramework/kmpp.framework libs/iOS && \
cp -R kmpp/build/bin/macos/debugFramework/kmpp.framework libs/macOS
