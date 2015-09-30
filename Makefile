#
# Use base mk files to generate libraries (DragonFly)
#

LIB=		scf
SHLIB_MAJOR=	1
SRCS=		error.c \
		highlevel.c \
		lowlevel.c \
		midlevel.c \
		notify_params.c \
		scf_tmpl.c \
		scf_type.c

CFLAGS+=	-I/usr/local/include \
		-I${.CURDIR}/include

VERSION_DEF=	${.CURDIR}/Versions.def
SYMBOL_MAPS=	${.CURDIR}/mapfile-vers

NOPROFILE=	yes
NO_PROFILE=	yes

.include <bsd.lib.mk>
