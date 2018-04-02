﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "DemoReflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(demo::AboutWindow)
			IMPL_CPP_TYPE_INFO(demo::AboutWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::FindWindow)
			IMPL_CPP_TYPE_INFO(demo::FindWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::RecentFileItemTemplate)
			IMPL_CPP_TYPE_INFO(demo::RecentFileItemTemplateConstructor)

#define _ ,
			BEGIN_CLASS_MEMBER(::demo::AboutWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::AboutWindow*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(documentLabel_ActiveHyperlinkExecuted, { L"sender" _ L"arguments" })
			END_CLASS_MEMBER(::demo::AboutWindow)

			BEGIN_CLASS_MEMBER(::demo::AboutWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::AboutWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(documentLabel)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::AboutWindowConstructor)

			BEGIN_CLASS_MEMBER(::demo::FindWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::FindWindow*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(FindNext, { L"toFind" _ L"caseSensitive" _ L"down" })
				CLASS_MEMBER_FIELD(textBox)
			END_CLASS_MEMBER(::demo::FindWindow)

			BEGIN_CLASS_MEMBER(::demo::FindWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::FindWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_22)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(checkCase)
				CLASS_MEMBER_FIELD(dialogContentNotFound)
				CLASS_MEMBER_FIELD(groupDirection)
				CLASS_MEMBER_FIELD(radioDown)
				CLASS_MEMBER_FIELD(radioUp)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textFind)
			END_CLASS_MEMBER(::demo::FindWindowConstructor)

			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(CanCloseFile, NO_PARAMETER)
				CLASS_MEMBER_METHOD(OpenFile, { L"filterIndex" })
				CLASS_MEMBER_METHOD(SaveFile, { L"saveAs" })
				CLASS_MEMBER_METHOD(SetupTextConfig, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetupXmlConfig, NO_PARAMETER)
				CLASS_MEMBER_METHOD(commandAbout_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandEditCopy_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandEditCut_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandEditDelete_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandEditFind_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandEditPaste_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandEditRedo_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandEditSelect_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandEditUndo_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandFileExit_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandFileNewText_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandFileNewXml_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandFileOpenText_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandFileOpenXml_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandFileOpen_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandFileSaveAs_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(commandFileSave_Executed, { L"sender" _ L"arguments" })
				CLASS_MEMBER_METHOD(window_Closing, { L"sender" _ L"arguments" })
				CLASS_MEMBER_FIELD(fileName)
				CLASS_MEMBER_FIELD(findWindow)
				CLASS_MEMBER_FIELD(isXml)
				CLASS_MEMBER_FIELD(recentFiles)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_22)
				CLASS_MEMBER_FIELD(__vwsn_precompile_23)
				CLASS_MEMBER_FIELD(__vwsn_precompile_24)
				CLASS_MEMBER_FIELD(__vwsn_precompile_25)
				CLASS_MEMBER_FIELD(__vwsn_precompile_26)
				CLASS_MEMBER_FIELD(__vwsn_precompile_27)
				CLASS_MEMBER_FIELD(__vwsn_precompile_28)
				CLASS_MEMBER_FIELD(__vwsn_precompile_29)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_30)
				CLASS_MEMBER_FIELD(__vwsn_precompile_31)
				CLASS_MEMBER_FIELD(__vwsn_precompile_32)
				CLASS_MEMBER_FIELD(__vwsn_precompile_33)
				CLASS_MEMBER_FIELD(__vwsn_precompile_34)
				CLASS_MEMBER_FIELD(__vwsn_precompile_35)
				CLASS_MEMBER_FIELD(__vwsn_precompile_36)
				CLASS_MEMBER_FIELD(__vwsn_precompile_37)
				CLASS_MEMBER_FIELD(__vwsn_precompile_38)
				CLASS_MEMBER_FIELD(__vwsn_precompile_39)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_40)
				CLASS_MEMBER_FIELD(__vwsn_precompile_41)
				CLASS_MEMBER_FIELD(__vwsn_precompile_42)
				CLASS_MEMBER_FIELD(__vwsn_precompile_43)
				CLASS_MEMBER_FIELD(__vwsn_precompile_44)
				CLASS_MEMBER_FIELD(__vwsn_precompile_45)
				CLASS_MEMBER_FIELD(__vwsn_precompile_46)
				CLASS_MEMBER_FIELD(__vwsn_precompile_47)
				CLASS_MEMBER_FIELD(__vwsn_precompile_48)
				CLASS_MEMBER_FIELD(__vwsn_precompile_49)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_50)
				CLASS_MEMBER_FIELD(__vwsn_precompile_51)
				CLASS_MEMBER_FIELD(__vwsn_precompile_52)
				CLASS_MEMBER_FIELD(__vwsn_precompile_53)
				CLASS_MEMBER_FIELD(__vwsn_precompile_54)
				CLASS_MEMBER_FIELD(__vwsn_precompile_55)
				CLASS_MEMBER_FIELD(__vwsn_precompile_56)
				CLASS_MEMBER_FIELD(__vwsn_precompile_57)
				CLASS_MEMBER_FIELD(__vwsn_precompile_58)
				CLASS_MEMBER_FIELD(__vwsn_precompile_59)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_60)
				CLASS_MEMBER_FIELD(__vwsn_precompile_61)
				CLASS_MEMBER_FIELD(__vwsn_precompile_62)
				CLASS_MEMBER_FIELD(__vwsn_precompile_63)
				CLASS_MEMBER_FIELD(__vwsn_precompile_64)
				CLASS_MEMBER_FIELD(__vwsn_precompile_65)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(commandAbout)
				CLASS_MEMBER_FIELD(commandEditCopy)
				CLASS_MEMBER_FIELD(commandEditCut)
				CLASS_MEMBER_FIELD(commandEditDelete)
				CLASS_MEMBER_FIELD(commandEditFind)
				CLASS_MEMBER_FIELD(commandEditPaste)
				CLASS_MEMBER_FIELD(commandEditRedo)
				CLASS_MEMBER_FIELD(commandEditSelect)
				CLASS_MEMBER_FIELD(commandEditUndo)
				CLASS_MEMBER_FIELD(commandFileExit)
				CLASS_MEMBER_FIELD(commandFileNewText)
				CLASS_MEMBER_FIELD(commandFileNewXml)
				CLASS_MEMBER_FIELD(commandFileOpen)
				CLASS_MEMBER_FIELD(commandFileOpenText)
				CLASS_MEMBER_FIELD(commandFileOpenXml)
				CLASS_MEMBER_FIELD(commandFileSave)
				CLASS_MEMBER_FIELD(commandFileSaveAs)
				CLASS_MEMBER_FIELD(dialogCannotOpen)
				CLASS_MEMBER_FIELD(dialogCannotSave)
				CLASS_MEMBER_FIELD(dialogOpen)
				CLASS_MEMBER_FIELD(dialogQueryClose)
				CLASS_MEMBER_FIELD(dialogSave)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(textBox)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

			BEGIN_CLASS_MEMBER(::demo::RecentFileItemTemplate)
				CLASS_MEMBER_CONSTRUCTOR(::demo::RecentFileItemTemplate*(::vl::presentation::controls::GuiToolstripCommand*), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::demo::RecentFileItemTemplate)

			BEGIN_CLASS_MEMBER(::demo::RecentFileItemTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::RecentFileItemTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(ViewModel)
			END_CLASS_MEMBER(::demo::RecentFileItemTemplateConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::AboutWindow)
					ADD_TYPE_INFO(::demo::AboutWindowConstructor)
					ADD_TYPE_INFO(::demo::FindWindow)
					ADD_TYPE_INFO(::demo::FindWindowConstructor)
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
					ADD_TYPE_INFO(::demo::RecentFileItemTemplate)
					ADD_TYPE_INFO(::demo::RecentFileItemTemplateConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadDemoTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<DemoTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
