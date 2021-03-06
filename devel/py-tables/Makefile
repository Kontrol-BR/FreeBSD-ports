# Created by: ijliao@FreeBSD.org

PORTNAME=	tables
PORTVERSION=	3.6.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Hierarchical database for Python

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}numexpr>=1.4.1:math/py-numexpr@${PY_FLAVOR}
LIB_DEPENDS=	libhdf5.so:science/hdf5 \
		liblzo2.so:archivers/lzo2 \
		libucl.so:archivers/ucl
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		${PYTHON_PKGNAMEPREFIX}six>=1.9.0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mock>=2.0:devel/py-mock@${PY_FLAVOR}

CONFLICTS_BUILD=	zstd # conflicting version of zstd is bundled

USES=		fortran python:3.6+
USE_PYTHON=	autoplist concurrent distutils cython

PORTEXAMPLES=	*

OPTIONS_DEFINE=		EXAMPLES

post-patch:
	@${REINPLACE_CMD} -e "s,%%LOCALBASE%%,${LOCALBASE}," ${WRKSRC}/setup.py

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/tables/*.so

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/*.py ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
