
# docker build instruction (C++ development over clion IDE)

sudo docker build --no-cache -t linuxcenv .

sudo docker run -it -v $(pwd):/work --rm linuxcenv

ls build

build/linux_app

Go to setting->toolchain->select Docker, make sure it is auto-detected
