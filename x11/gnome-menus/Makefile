# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
#   $MCom: ports/trunk/x11/gnome-menus/Makefile 20031 2014-11-02 21:47:55Z kwm $

PORTNAME=	gnome-menus
PORTVERSION=	3.36.0
CATEGORIES=	x11 gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Implementation of the FreeDesktop Desktop Menu Spec

LICENSE=	GPLv2

USES=		gettext gmake gnome libtool localbase pathfix pkgconfig python tar:xz
USE_GNOME=	glib20 gnomeprefix intlhack \
		introspection:build
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

post-install:
	@${MKDIR} -p ${STAGEDIR}${PREFIX}/etc/xdg/menus/
	@${INSTALL_DATA} ${WRKSRC}/layout/gnome-applications.menu \
		${STAGEDIR}${PREFIX}/etc/xdg/menus/gnome-applications.menu

.include <bsd.port.mk>
