# FROM ubuntu:latest

# ENV HOME /root

# RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y tzdata
# RUN apt-get install -y vim build-essential git cmake net-tools gdb clang wget

# RUN cd ${HOME} && \
#     wget --no-check-certificate --quiet \
#         https://boostorg.jfrog.io/artifactory/main/release/1.77.0/source/boost_1_77_0.tar.gz && \
#         tar xzf ./boost_1_77_0.tar.gz && \
#         cd ./boost_1_77_0 && \
#         ./bootstrap.sh && \
#         ./b2 install && \
#         cd .. && \
#         rm -rf ./boost_1_77_0
        
# WORKDIR /work

FROM ubuntu:latest

RUN DEBIAN_FRONTEND="noninteractive" apt-get update && apt-get -y install tzdata

RUN apt-get update \
&& apt-get install -y ssh \
    build-essential \
    libboost-all-dev \
    git \
    cmake \
    vim \
    net-tools \
    gdb \
    clang \
    rsync \
    tar \
&& apt-get clean

WORKDIR /work