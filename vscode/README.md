
# docker build instruction 

(note: add user if needed `sudo gpasswd -a $USER docker` then `systemctl start docker`)

```
sudo docker build --no-cache -t linuxcenv .

sudo docker run --name cpp_container -v $(pwd):/work --rm -it linuxcenv

ls build

build/linux_app
```
Go to setting->toolchain->select Docker, make sure it is auto-detected
