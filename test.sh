#!/bin/bash

set -e

ndk-build \
    NDK_PROJECT_PATH=. \
    NDK_APPLICATION_MK=Application.mk
