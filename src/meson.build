settings_headers = files(
  'buoh-settings.h',
)
enum_headers = settings_headers + files(
  'buoh-view.h',
)

sources = files(
  'buoh-add-comic-dialog.c',
  'buoh-application.c',
  'buoh-comic-cache.c',
  'buoh-comic-list.c',
  'buoh-comic-loader.c',
  'buoh-comic-manager-date.c',
  'buoh-comic-manager.c',
  'buoh-comic.c',
  'buoh-properties-dialog.c',
  'buoh-view-comic.c',
  'buoh-view-message.c',
  'buoh-view.c',
  'buoh-window.c',
  'main.c',
)

sources += gnome.compile_resources(
  'buoh-resources',
  join_paths(data_dir, 'org.gnome.buoh.gresource.xml'),
  source_dir: [
    data_dir,
  ],
  c_name: 'buoh',
  export: true,
)

sources += gnome.mkenums_simple(
  'buoh-enums',
  sources: enum_headers,
)

cflags = [
  '-DCOMICS_DIR="@0@"'.format(comicsdir),
  '-DGETTEXT_PACKAGE="@0@"'.format(meson.project_name()),
  '-DVERSION="@0@"'.format(meson.project_version()),
  '-DLOCALE_DIR="@0@"'.format(localedir),
]

link_args = []

buoh = executable(
  meson.project_name(),
  sources,
  dependencies: buoh_deps,
  c_args: cflags,
  link_args: link_args,
  install: true,
)
