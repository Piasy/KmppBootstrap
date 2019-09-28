#!/bin/zsh

cd iOSExample && \
xcodegen && \
cd .. && \
cd macOSExample && \
xcodegen && \
cd ..
