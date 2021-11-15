#include <systemd/sd-journal.h>

int main(int argc, char *argv[]) {
        sd_journal_print(LOG_NOTICE, "Hello World2");
        return 0;
}
