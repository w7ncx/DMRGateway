/*
*   Copyright (C) 2017,2019 by Jonathan Naylor G4KLX
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#if !defined(REMOVETA_H)
#define	REMOVETA_H

#include "DMREmbeddedData.h"
#include "DMRData.h"

class CRemoveTA {
public:
	CRemoveTA();
	~CRemoveTA();

	bool process(CDMRData& data);

private:
	CDMREmbeddedData m_embeddedLC;

	void processHeader(CDMRData& data);
	void processVoice(CDMRData& data);
};

#endif