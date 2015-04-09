//  Copyright (c) 2015 Hugo Amiard hugo.amiard@laposte.net
//  This software is provided 'as-is' under the zlib License, see the LICENSE.txt file.
//  This notice and the license may not be removed or altered from any source distribution.

#ifndef MK_UITYPES_H_INCLUDED
#define MK_UITYPES_H_INCLUDED

#include <Ui/Form/mkForm.h>
#include <Ui/Form/mkRootForm.h>
#include <Ui/Form/mkInput.h>
#include <Ui/Form/mkWidgets.h>
#include <Ui/Form/mkHook.h>

#include <Ui/Frame/mkFrame.h>
#include <Ui/Frame/mkInk.h>

#include <Ui/Style/mkStyleParser.h>

#include <Ui/Widget/mkWidget.h>
#include <Ui/Widget/mkSheet.h>
#include <Ui/Widget/mkRootSheet.h>

#include <Ui/Widget/mkButton.h>
#include <Ui/Widget/mkSlider.h>
#include <Ui/Widget/mkScrollbar.h>
#include <Ui/Widget/mkProgressBar.h>
#include <Ui/Widget/mkCheckbox.h>
#include <Ui/Widget/mkTypeIn.h>
#include <Ui/Widget/mkDirectory.h>

#include <Ui/Scheme/mkDropdown.h>
#include <Ui/Scheme/mkRadioButton.h>
#include <Ui/Scheme/mkExpandbox.h>
#include <Ui/Scheme/mkTree.h>
#include <Ui/Scheme/mkTable.h>
#include <Ui/Scheme/mkTabber.h>
#include <Ui/Scheme/mkDockspace.h>

#include <Ui/Frame/mkDimString.h>

#include <Ui/mkUiWindow.h>
#include <Ui/mkUiLayout.h>

namespace mk
{
	template <> inline Type* typecls<Dimension>() { return Typed<Dimension>::cls(); }
	template <> inline Type* typecls<Sizing>() { return Typed<Sizing>::cls(); }
	template <> inline Type* typecls<Pivot>() { return Typed<Pivot>::cls(); }
	template <> inline Type* typecls<Flow>() { return Typed<Flow>::cls(); }
	template <> inline Type* typecls<Clipping>() { return Typed<Clipping>::cls(); }
	template <> inline Type* typecls<Overflow>() { return Typed<Overflow>::cls(); }
	template <> inline Type* typecls<BoxLayer>() { return Typed<BoxLayer>::cls(); }
	template <> inline Type* typecls<Opacity>() { return Typed<Opacity>::cls(); }
	template <> inline Type* typecls<Weight>() { return Typed<Weight>::cls(); }
	template <> inline Type* typecls<FrameType>() { return Typed<FrameType>::cls(); }
	template <> inline Type* typecls<WidgetState>() { return Typed<WidgetState>::cls(); }

	template class MK_UI_EXPORT Typed<Dimension>;
	template class MK_UI_EXPORT Typed<Sizing>;
	template class MK_UI_EXPORT Typed<Pivot>;
	template class MK_UI_EXPORT Typed<Flow>;
	template class MK_UI_EXPORT Typed<Clipping>;
	template class MK_UI_EXPORT Typed<Overflow>;
	template class MK_UI_EXPORT Typed<BoxLayer>;
	template class MK_UI_EXPORT Typed<Opacity>;
	template class MK_UI_EXPORT Typed<Weight>;
	template class MK_UI_EXPORT Typed<FrameType>;
	template class MK_UI_EXPORT Typed<WidgetState>;
}

#endif // MK_UITYPES_H_INCLUDED