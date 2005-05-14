/**
 * $Id$
 */
#if defined(_MSC_VER) && (_MSC_VER > 1200)
#pragma once
#endif

#ifndef __os__include__noCOMBase_h__
#define __os__include__noCOMBase_h__ 1

class IUnknown {
public:
	virtual uint32 AddRef() = 0;
	virtual uint32 Release() = 0;
};

#endif
