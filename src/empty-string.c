/**
 * Copyright (C) 2012 The CompilerKit contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#include "CompilerKit/empty-string.h"
#define COMPILERKIT_EMPTY_STRING_GET_PRIVATE(obj) (G_TYPE_INSTANCE_GET_PRIVATE ((obj), COMPILERKIT_TYPE_EMPTY_STRING, CompilerKitEmptyStringPrivate))
G_DEFINE_TYPE(CompilerKitEmptyString, compilerkit_empty_string, G_TYPE_OBJECT);

/** @todo Private method function prototypes go here (for private methods, declare as static) */
static void compilerkit_empty_string_finalize (GObject* object);
static void compilerkit_empty_string_dispose (GObject* object);

/**
 * @struct _CompilerKitEmptyStringPrivate
 * The private fields of the CompilerKitEmptyString struct.
 * 
 * @see #CompilerKitEmptyString
 */
struct _CompilerKitEmptyStringPrivate
{
    /** @todo Declare private members here */
    /**
     * @todo dummy is here so everything will compile by default.
     * If the class does not require private fields, search for private and remove all relevant macros, function calls, etc.
     */ 
    int dummy;
};

/**
 * compilerkit_empty_string_class_init:
 * @fn compilerkit_empty_string_class_init
 * Initializes the CompilerKitEmptyStringClass (virtual table).
 * @pre klass is not NULL.
 * @param CompilerKitEmptyStringClass to initialize
 * @return void
 */
static void
compilerkit_empty_string_class_init (CompilerKitEmptyStringClass *klass)
{
  GObjectClass *g_object_class;
  
  /* Add private structure */
  g_type_class_add_private (klass, sizeof (CompilerKitEmptyStringPrivate));
  
  /* Get the parent gobject class */
  g_object_class = G_OBJECT_CLASS(klass);
  
  /** @todo Hook virtual methods to implementations */
  // klass->method = method_implementation;
  
  /* Hook finalization functions */
  g_object_class->dispose = compilerkit_empty_string_dispose;   /* instance destructor, reverse of init */
  g_object_class->finalize = compilerkit_empty_string_finalize; /* class finalization, reverse of class init */
}

/**
 * compilerkit_empty_string_init:
 * @fn compilerkit_empty_string_init 
 * Initializes the CompilerKitEmptyString instance.
 * @pre self is not NULL.
 * @param CompilerKitEmptyString to initialize
 * @return void
 */
static void
compilerkit_empty_string_init (CompilerKitEmptyString *self)
{
  CompilerKitEmptyStringPrivate *priv;

  self->priv = priv = COMPILERKIT_EMPTY_STRING_GET_PRIVATE (self);

  /** @todo Initialize public fields */
  // self->public_field = some_value;

  /** @todo Initialize private fields */
  // priv->member = whatever;
}

/**
 * compilerkit_empty_string_new:
 * @fn compilerkit_empty_string_new
 * @memberof CompilerKitEmptyString
 * Construct a CompilerKitEmptyString instance.
 * @pre None
 * @param None
 * @return A new CompilerKitEmptyString struct.
 */
CompilerKitEmptyString* compilerkit_empty_string_new (void)
{
	return COMPILERKIT_EMPTY_STRING (g_object_new (COMPILERKIT_TYPE_EMPTY_STRING, NULL));
}

/**
 * compilerkit_empty_string_finalize:
 * @fn compilerkit_empty_string_finalize
 * Reverse what compilerkit_empty_string_class_init allocated.
 * @pre GObject is not NULL.
 * @param GObject* An object to finalize.
 * @return void
 */
static void
compilerkit_empty_string_finalize (GObject* object)
{
	G_OBJECT_CLASS (compilerkit_empty_string_parent_class)->finalize (object);
}

/**
 * compilerkit_empty_string_dispose:
 * @fn compilerkit_empty_string_dispose
 * Reverse what compilerkit_empty_string_init allocated.
 * @pre GObject is not NULL.
 * @param GObject* An object to dispose.
 * @return void
 */
static void
compilerkit_empty_string_dispose (GObject* object)
{
  CompilerKitEmptyString *self = COMPILERKIT_EMPTY_STRING (object);
  CompilerKitEmptyStringPrivate* priv;

  priv = COMPILERKIT_EMPTY_STRING_GET_PRIVATE (self);
  
  /** @todo Deallocate memory as necessary */

  G_OBJECT_CLASS (compilerkit_empty_string_parent_class)->dispose (object);
}