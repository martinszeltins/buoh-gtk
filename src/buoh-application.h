#ifndef BUOH_APPLICATION_H
#define BUOH_APPLICATION_H
#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

enum {
    COMIC_LIST_VISIBLE,
    COMIC_LIST_TITLE,
    COMIC_LIST_AUTHOR,
    COMIC_LIST_LANGUAGE,
    COMIC_LIST_COMIC_MANAGER,
    N_COLUMNS
};

#define BUOH_TYPE_APPLICATION (buoh_application_get_type())
G_DECLARE_FINAL_TYPE (BuohApplication, buoh_application, BUOH, APPLICATION, GtkApplication)

BuohApplication * buoh_application_get_instance       (void);
BuohApplication * buoh_application_new                (void);

void              buoh_application_activate           (GApplication    * buoh);
void              buoh_application_startup            (GApplication    * buoh);
GtkTreeModel    * buoh_application_get_comics_model   (BuohApplication * buoh);
const gchar     * buoh_application_get_datadir        (BuohApplication * buoh);

void             buoh_debug                          (const gchar     *format, ...);

G_END_DECLS

#endif /* !BUOH_APPLICATION_H */
