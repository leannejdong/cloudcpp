
# docker build instruction (C++ development over clion IDE)

sudo docker build --no-cache -t linuxcenv .

sudo docker run -it --rm --name boosteg -v $(pwd):/work linuxcenv

do your usual thing with cmake

Go to setting->toolchain->select Docker, make sure it is auto-detected
