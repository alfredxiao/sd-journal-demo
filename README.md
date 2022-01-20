sudo apt install libsystemd-dev

gcc demo-syslog.c -o demo-syslog
gcc $(pkg-config --cflags libsystemd) demo-sd-journal.c $(pkg-config --libs libsystemd) -o demo-sd-journal

./demo-sd-journal-send
journalctl MESSAGE_ID=52fb62f99e2c49d89cfbf9d6de5e3555


Reference: https://0pointer.de/blog/projects/journal-submit.html


