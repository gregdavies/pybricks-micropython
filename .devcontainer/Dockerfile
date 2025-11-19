FROM mcr.microsoft.com/devcontainers/base:ubuntu-22.04

RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get install -y --no-install-recommends \
        git \
        build-essential \
        python3 \
        python3-pip \
        python3-venv \
        cmake \
        ninja-build \
        wget \
        unzip \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

RUN wget -q https://developer.arm.com/-/media/Files/downloads/gnu-rm/10-2020q4/gcc-arm-none-eabi-10-2020-q4-major-x86_64-linux.tar.bz2 \
    && tar -xjf gcc-arm-none-eabi-10-2020-q4-major-x86_64-linux.tar.bz2 -C /opt \
    && rm gcc-arm-none-eabi-10-2020-q4-major-x86_64-linux.tar.bz2

ENV PATH="/opt/gcc-arm-none-eabi-10-2020-q4-major/bin:${PATH}"
