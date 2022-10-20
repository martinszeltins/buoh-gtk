#include <glib.h>
#include <glib/gi18n.h>
#include <gtk/gtk.h>
#include "buoh-application.h"

int main (int argc, char *argv[])
{
    g_autoptr (BuohApplication) buoh;

    bindtextdomain (GETTEXT_PACKAGE, LOCALE_DIR);
    bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
    textdomain (GETTEXT_PACKAGE);

    buoh = buoh_application_new();

    return g_application_run (G_APPLICATION (buoh), argc, argv);
}
