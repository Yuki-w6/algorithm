FROM node:19

# インタラクティブモードにならないようにする
ARG DEBIAN_FRONTEND=noninteractive

# タイムゾーンを日本に設定
ENV TZ=Asia/Tokyo

WORKDIR /mnt

# 必要なパッケージリストを更新、インストール
RUN apt-get update && \
    apt-get install -y \
    time \
    tzdata \
    tree \
    curl \
    gcc \
    g++ \
    gdb \
    python3.9 \
    python3-pip \
    bash \
    git \
    bash-completion \
    && rm -rf /ver/lib/apt/lists/*

# atcoder-cliのインストール
RUN npm install -g atcoder-cli@2.2.0

# ojのインストール
RUN pip install online-judge-tools==11.5.1

COPY . .

# C++でAtCoder Library(ACL)を使えるようにする
RUN git clone https://github.com/atcoder/ac-library.git /lib/ac-library
ENV CPLUS_INCLUDE_PATH /lib/ac-library

# bash をデフォルトシェルとして設定
SHELL ["/bin/bash", "-c"]

CMD ["tail", "-f", "/dev/null"]
