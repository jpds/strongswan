/*
 * Copyright (C) 2011 Andreas Steffen
 * HSR Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

/**
 * @defgroup ita_attrt ita_attr
 * @{ @ingroup ita_attr
 */

#ifndef ITA_ATTR_H_
#define ITA_ATTR_H_

#include <library.h>

typedef enum ita_attr_t ita_attr_t;

/**
 * IETF standard PA-TNC attribute types defined by RFC 5792
 */
enum ita_attr_t {
	ITA_ATTR_COMMAND =	1,
};

/**
 * enum name for ita_attr_t.
 */
extern enum_name_t *ita_attr_names;

#endif /** ITA_ATTR_H_ @}*/