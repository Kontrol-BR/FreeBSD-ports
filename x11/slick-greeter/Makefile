# Created by: Eric Turgeon <ericbsd@FreeBSD.org>

PORTNAME=	slick-greeter
PORTVERSION=	1.5.3
CATEGORIES=	x11

MAINTAINER=	ericbsd@FreeBSD.org
COMMENT=	Slick-looking LightDM greeter

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	liblightdm-gobject-1.so:x11/lightdm \
		libcanberra-gtk3.so:audio/libcanberra-gtk3 \
		libcanberra.so:audio/libcanberra \
		libfreetype.so:print/freetype2
BUILD_DEPENDS=	valac:lang/vala

USES=		autoreconf gettext gmake gnome localbase pkgconfig xorg
USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool

USE_XORG=	pixman x11 xext

USE_GITHUB=	yes
GH_ACCOUNT=	linuxmint

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes

GLIB_SCHEMAS=	x.dm.slick-greeter.gschema.xml

post-patch:
	@${REINPLACE_CMD} -e "s#/usr/share#${PREFIX}/share#g" \
		${WRKSRC}/src/session-list.vala

post-install:
	@${MV} ${STAGEDIR}/usr/share/${PORTNAME}/badges ${STAGEDIR}${DATADIR}
	@${RMDIR} ${STAGEDIR}/usr/share/${PORTNAME}/

.include <bsd.port.mk>
