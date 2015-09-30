# scf-dragonfly
Illumos service configuration facility library modified to build on DragonFly BSD.

The initial porting will conserve the XML format for the import and export
of manifests and service definitions, but once libscf is functioning as
designed by Sun Microsystems, the XML handling will be replaced by UCL (the
format used by pkg and rspamd)
