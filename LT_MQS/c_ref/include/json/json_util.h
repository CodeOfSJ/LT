/*
 * $Id: json_util.h,v 1.1 2011/02/25 05:28:43 zql Exp $
 *
 * Copyright (c) 2004, 2005 Metaparadigm Pte. Ltd.
 * Michael Clark <michael@metaparadigm.com>
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See COPYING for details.
 *
 */

#ifndef _json_util_h_
#define _json_util_h_

#include "json_object.h"

#ifdef __cplusplus
extern "C" {
#endif

#define JSON_FILE_BUF_SIZE 4096

/* utility functions */
extern struct json_object* json_object_from_file(char *filename);
extern int json_object_to_file(char *filename, struct json_object *obj);

#ifdef __cplusplus
}
#endif

#endif
