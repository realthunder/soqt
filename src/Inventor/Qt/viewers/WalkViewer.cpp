/**************************************************************************\
 *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) 1998-2003 by Systems in Motion.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  ("GPL") version 2 as published by the Free Software Foundation.
 *  See the file LICENSE.GPL at the root directory of this source
 *  distribution for additional information about the GNU GPL.
 *
 *  For using Coin with software that can not be combined with the GNU
 *  GPL, and for taking advantage of the additional benefits of our
 *  support services, please contact Systems in Motion about acquiring
 *  a Coin Professional Edition License.
 *
 *  See <URL:http://www.coin3d.org> for more information.
 *
 *  Systems in Motion, Teknobyen, Abels Gate 5, 7030 Trondheim, NORWAY.
 *  <URL:http://www.sim.no>.
 *
\**************************************************************************/

#include <soqtdefs.h>
#include <Inventor/Qt/viewers/SoQtWalkViewer.h>
#include <Inventor/Qt/viewers/SoGuiWalkViewerP.h>

// ************************************************************************

SOQT_OBJECT_SOURCE(SoQtWalkViewer);

// ************************************************************************

#define PRIVATE(ptr) ptr->pimpl
#define PUBLIC(ptr) ptr->pub

// ************************************************************************

#ifndef DOXYGEN_SKIP_THIS

class SoQtWalkViewerP : public SoGuiWalkViewerP {
public:
  SoQtWalkViewerP(SoQtWalkViewer * o)
    : SoGuiWalkViewerP(o)
  {
  }

  void constructor(void);
};

void
SoQtWalkViewerP::constructor(void)
{
}

#endif // DOXYGEN_SKIP_THIS

// ************************************************************************

/*!
  The public constructor.
*/

SoQtWalkViewer::SoQtWalkViewer(QWidget * parent,
                               const char * name,
                               SbBool embed,
                               SoQtFullViewer::BuildFlag flag,
                               SoQtViewer::Type type)
  : inherited(parent, name, embed, flag, type, TRUE)
{
  PRIVATE(this) = new SoQtWalkViewerP(this);
  PRIVATE(this)->constructor();
}

// ************************************************************************

/*!
  A protected constructor.
*/

SoQtWalkViewer::SoQtWalkViewer(QWidget * parent,
                               const char * name,
                               SbBool embed,
                               SoQtFullViewer::BuildFlag flag,
                               SoQtViewer::Type type,
                               SbBool build)
  : inherited(parent, name, embed, flag, type, FALSE)
{
  PRIVATE(this) = new SoQtWalkViewerP(this);
  PRIVATE(this)->constructor();
}

// ************************************************************************

/*!
  The destructor.
*/

SoQtWalkViewer::~SoQtWalkViewer()
{
}

// ************************************************************************

/*!
*/

void
SoQtWalkViewer::setViewing(SbBool enable)
{
}

// ************************************************************************

// Documented in superclass.
void
SoQtWalkViewer::setCamera(SoCamera * camera)
{
}

// ************************************************************************

/*!
*/

void
SoQtWalkViewer::setCursorEnabled(SbBool enable)
{
}

// ************************************************************************

/*!
*/

void
SoQtWalkViewer::setCameraType(SoType type)
{
}

// ************************************************************************

/*!
*/

const char *
SoQtWalkViewer::getDefaultWidgetName(void) const
{
  static const char defaultWidgetName[] = "";
  return defaultWidgetName;
}

// ************************************************************************

/*!
*/

const char *
SoQtWalkViewer::getDefaultTitle(void) const
{
  static const char defaultTitle[] = "Walk Viewer";
  return defaultTitle;
}

// ************************************************************************

/*!
*/

const char *
SoQtWalkViewer::getDefaultIconTitle(void) const
{
  static const char defaultIconTitle[] = "";
  return defaultIconTitle;
}

// ************************************************************************

/*!
*/

void
SoQtWalkViewer::processEvent(QEvent * event)
{
}

// ************************************************************************

/*!
*/

void
SoQtWalkViewer::setSeekMode(SbBool enable)
{
}

// ************************************************************************

// Documented in superclass.
void
SoQtWalkViewer::actualRedraw(void)
{
}

// ************************************************************************

/*!
*/

void
SoQtWalkViewer::rightWheelMotion(float value)
{
}

// ************************************************************************

/*!
*/

QWidget *
SoQtWalkViewer::buildLeftTrim(QWidget * parent)
{
  return NULL;
}

// ************************************************************************
