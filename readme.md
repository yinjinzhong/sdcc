## Ubuntu编译51类单片机

1. 编译软件：sdcc --- sudo apt install sdcc
2. 下载软件：gSTC-ISP
3. 安装问题：




- sdcc一般不会出现问题
- gSTC-ISP时（依次./configure，make，make，install)。
- ./configure时可能会出现要求依赖GTK+的情况，sudo apt-get install GTK+2.0可以解决这个问题。
- make install 时可能会出现无法识别vte/vte.h，sudo apt-get install libvte-dev后再将/usr/include/vte-0.0/vet文件夹复制到gSTC-ISP文件夹的src目录下。
