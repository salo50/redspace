
Debian
====================
This directory contains files used to package redspaced/redspace-qt
for Debian-based Linux systems. If you compile redspaced/redspace-qt yourself, there are some useful files here.

## redspace: URI support ##


redspace-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install redspace-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your redspace-qt binary to `/usr/bin`
and the `../../share/pixmaps/redspace128.png` to `/usr/share/pixmaps`

redspace-qt.protocol (KDE)

