// Copyright 2013 Dolphin Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.


// This file holds global data for DolphinWx and DebuggerWx

#pragma once

#include <cstddef>
#include <wx/event.h>

enum
{
	Toolbar_Step,
	Toolbar_StepOver,
	Toolbar_StepOut,
	Toolbar_Skip,
	Toolbar_GotoPC,
	Toolbar_SetPC,
	ToolbarDebugBitmapMax
};

enum
{
	IDM_LOADSTATE = 200, // File menu
	IDM_SAVESTATE,
	IDM_SELECTSLOT,
	IDM_SAVEFIRSTSTATE,
	IDM_UNDOLOADSTATE,
	IDM_UNDOSAVESTATE,
	IDM_LOADSTATEFILE,
	IDM_SAVESTATEFILE,
	IDM_SAVESLOT1,
	IDM_SAVESLOT2,
	IDM_SAVESLOT3,
	IDM_SAVESLOT4,
	IDM_SAVESLOT5,
	IDM_SAVESLOT6,
	IDM_SAVESLOT7,
	IDM_SAVESLOT8,
	IDM_SAVESLOT9,
	IDM_SAVESLOT10,
	IDM_LOADSLOT1,
	IDM_LOADSLOT2,
	IDM_LOADSLOT3,
	IDM_LOADSLOT4,
	IDM_LOADSLOT5,
	IDM_LOADSLOT6,
	IDM_LOADSLOT7,
	IDM_LOADSLOT8,
	IDM_LOADSLOT9,
	IDM_LOADSLOT10,
	IDM_LOADLAST1,
	IDM_LOADLAST2,
	IDM_LOADLAST3,
	IDM_LOADLAST4,
	IDM_LOADLAST5,
	IDM_LOADLAST6,
	IDM_LOADLAST7,
	IDM_LOADLAST8,
	IDM_SELECTSLOT1,
	IDM_SELECTSLOT2,
	IDM_SELECTSLOT3,
	IDM_SELECTSLOT4,
	IDM_SELECTSLOT5,
	IDM_SELECTSLOT6,
	IDM_SELECTSLOT7,
	IDM_SELECTSLOT8,
	IDM_SELECTSLOT9,
	IDM_SELECTSLOT10,
	IDM_SAVESELECTEDSLOT,
	IDM_LOADSELECTEDSLOT,
	IDM_FRAMESKIP0,
	IDM_FRAMESKIP1,
	IDM_FRAMESKIP2,
	IDM_FRAMESKIP3,
	IDM_FRAMESKIP4,
	IDM_FRAMESKIP5,
	IDM_FRAMESKIP6,
	IDM_FRAMESKIP7,
	IDM_FRAMESKIP8,
	IDM_FRAMESKIP9,
	IDM_PLAY,
	IDM_STOP,
	IDM_RESET,
	IDM_TOGGLE_FULLSCREEN,
	IDM_RECORD,
	IDM_PLAYRECORD,
	IDM_RECORDEXPORT,
	IDM_RECORDREADONLY,
	IDM_TASINPUT,
	IDM_TOGGLE_PAUSEMOVIE,
	IDM_SHOWLAG,
	IDM_SHOWFRAMECOUNT,
	IDM_SHOWINPUTDISPLAY,
	IDM_FRAMESTEP,
	IDM_SCREENSHOT,
	IDM_TOGGLE_DUMPFRAMES,
	IDM_TOGGLE_DUMPAUDIO,
	IDM_BROWSE,
	IDM_DRIVES,
	IDM_DRIVE1,
	IDM_DRIVE24 = IDM_DRIVE1 + 23,//248,

	IDM_MEMCARD, // Tools menu
	IDM_CHEATS,
	IDM_NETPLAY,
	IDM_RESTART,
	IDM_CHANGEDISC,
	IDM_LIST_CHANGEDISC,
	IDM_PROPERTIES,
	IDM_GAMEWIKI,
	IDM_LOAD_WII_MENU,
	IDM_MENU_INSTALLWAD,
	IDM_LIST_INSTALLWAD,
	IDM_FIFOPLAYER,
	IDM_CONNECT_WIIMOTE1,
	IDM_CONNECT_WIIMOTE2,
	IDM_CONNECT_WIIMOTE3,
	IDM_CONNECT_WIIMOTE4,
	IDM_CONNECT_BALANCEBOARD,

	IDM_LISTWAD,
	IDM_LISTWII,
	IDM_LISTGC,
	IDM_LISTJAP,
	IDM_LISTPAL,
	IDM_LISTUSA,
	IDM_LISTAUSTRALIA,
	IDM_LISTFRANCE,
	IDM_LISTGERMANY,
	IDM_LISTINTERNATIONAL,
	IDM_LISTITALY,
	IDM_LISTKOREA,
	IDM_LISTNETHERLANDS,
	IDM_LISTRUSSIA,
	IDM_LISTSPAIN,
	IDM_LISTTAIWAN,
	IDM_LIST_UNK,
	IDM_LISTDRIVES,
	IDM_PURGECACHE,

	IDM_HELPWEBSITE, // Help menu
	IDM_HELPONLINEDOCS,
	IDM_HELPGITHUB,

	IDM_CONFIG_GFX_BACKEND,
	IDM_CONFIG_DSP_EMULATOR,
	IDM_CONFIG_CONTROLLERS,
	IDM_CONFIG_HOTKEYS,
	IDM_CONFIG_LOGGER,

	// Views
	IDM_LOGWINDOW,
	IDM_LOGCONFIGWINDOW,
	IDM_REGISTERWINDOW,
	IDM_WATCHWINDOW,
	IDM_BREAKPOINTWINDOW,
	IDM_MEMORYWINDOW,
	IDM_JITWINDOW,
	IDM_SOUNDWINDOW,
	IDM_VIDEOWINDOW,
	IDM_CODEWINDOW,

	// List Column Title Toggles
	IDM_SHOW_SYSTEM,
	IDM_SHOW_BANNER,
	IDM_SHOW_NOTES,
	IDM_SHOW_ID,
	IDM_SHOW_REGION,
	IDM_SHOW_SIZE,
	IDM_SHOW_STATE,


	// Float Window IDs
	IDM_LOGWINDOW_PARENT,
	IDM_LOGCONFIGWINDOW_PARENT,
	IDM_REGISTERWINDOW_PARENT,
	IDM_BREAKPOINTWINDOW_PARENT,
	IDM_MEMORYWINDOW_PARENT,
	IDM_JITWINDOW_PARENT,
	IDM_SOUNDWINDOW_PARENT,
	IDM_VIDEOWINDOW_PARENT,
	IDM_CODEWINDOW_PARENT,

	// Float popup menu IDs
	IDM_FLOAT_LOGWINDOW,
	IDM_FLOAT_LOGCONFIGWINDOW,
	IDM_FLOAT_REGISTERWINDOW,
	IDM_FLOAT_BREAKPOINTWINDOW,
	IDM_FLOAT_MEMORYWINDOW,
	IDM_FLOAT_JITWINDOW,
	IDM_FLOAT_SOUNDWINDOW,
	IDM_FLOAT_VIDEOWINDOW,
	IDM_FLOAT_CODEWINDOW,

	// --------------------------------------------------------------
	// Debugger Menu Entries
	// --------------------
	// CPU Mode
	IDM_INTERPRETER,
	IDM_AUTOMATICSTART, IDM_BOOTTOPAUSE,
	IDM_JITNOBLOCKCACHE, IDM_JITNOBLOCKLINKING,  // JIT
	IDM_JITOFF,
	IDM_JITLSOFF, IDM_JITLSLXZOFF, IDM_JITLSLWZOFF, IDM_JITLSLBZXOFF,
	IDM_JITLSPOFF, IDM_JITLSFOFF,
	IDM_JITIOFF,
	IDM_JITFPOFF,
	IDM_JITPOFF,
	IDM_JITSROFF,
	IDM_FONTPICKER,

	// Symbols
	IDM_CLEARSYMBOLS,
	IDM_SCANFUNCTIONS,
	IDM_LOADMAPFILE, IDM_LOADMAPFILEAS, IDM_LOADBADMAPFILE,
	IDM_SAVEMAPFILE, IDM_SAVEMAPFILEWITHCODES, IDM_SAVEMAPFILEAS,
	IDM_CREATESIGNATUREFILE,
	IDM_APPENDSIGNATUREFILE,
	IDM_COMBINESIGNATUREFILES,
	IDM_RENAME_SYMBOLS,
	IDM_USESIGNATUREFILE,
	IDM_PATCHHLEFUNCTIONS,

	// JIT
	IDM_CLEARCODECACHE,
	IDM_LOGINSTRUCTIONS,
	IDM_SEARCHINSTRUCTION,

	// Profiler
	IDM_PROFILEBLOCKS,
	IDM_WRITEPROFILE,
	// --------------------------------------------------------------

	// --------------------------------------------------------------
	// Debugger Toolbar
	// --------------------
	ID_TOOLBAR_DEBUG,
	IDM_STEP,
	IDM_STEPOVER,
	IDM_STEPOUT,
	IDM_TOGGLE_BREAKPOINT,
	IDM_SKIP,
	IDM_SETPC,
	IDM_GOTOPC,
	IDM_ADDRBOX,

	ID_TOOLBAR_AUI,
	IDM_SAVE_PERSPECTIVE,
	IDM_ADD_PERSPECTIVE,
	IDM_PERSPECTIVES_ADD_PANE,
	IDM_EDIT_PERSPECTIVES,
	IDM_TAB_SPLIT,
	IDM_NO_DOCKING,
	IDM_PERSPECTIVES_0,
	IDM_PERSPECTIVES_100 = IDM_PERSPECTIVES_0 + 100,
	// --------------------------------------------------------------

	IDM_TOGGLE_DUALCORE, // Other
	IDM_TOGGLE_SKIPIDLE,
	IDM_TOGGLE_TOOLBAR,
	IDM_TOGGLE_STATUSBAR,
	IDM_NOTIFYMAPLOADED,
	IDM_OPENCONTAININGFOLDER,
	IDM_OPENSAVEFOLDER,
	IDM_EXPORTSAVE,
	IDM_IMPORTSAVE,
	IDM_EXPORTALLSAVE,
	IDM_SETDEFAULTISO,
	IDM_DELETEISO,
	IDM_COMPRESSISO,
	IDM_MULTICOMPRESSISO,
	IDM_MULTIDECOMPRESSISO,
	IDM_UPDATEDISASMDIALOG,
	IDM_UPDATEGUI,
	IDM_UPDATESTATUSBAR,
	IDM_UPDATETITLE,
	IDM_UPDATEBREAKPOINTS,
	IDM_UPDATEJITPANE,
	IDM_PANIC,
	IDM_KEYSTATE,
	IDM_WINDOWSIZEREQUEST,
	IDM_STOPPED,
	IDM_HOST_MESSAGE,
	IDM_FULLSCREENREQUEST,

	IDM_MPANEL, ID_STATUSBAR,

	IDM_FREELOOK_INCREASE_SPEED,
	IDM_FREELOOK_DECREASE_SPEED,
	IDM_FREELOOK_RESET_SPEED,
	IDM_FREELOOK_UP,
	IDM_FREELOOK_DOWN,
	IDM_FREELOOK_LEFT,
	IDM_FREELOOK_RIGHT,
	IDM_FREELOOK_ZOOM_IN,
	IDM_FREELOOK_ZOOM_OUT,
	IDM_FREELOOK_RESET,

	ID_TOOLBAR = 500,
};

// custom message macro
#define EVT_HOST_COMMAND(id, fn) \
	DECLARE_EVENT_TABLE_ENTRY(\
			wxEVT_HOST_COMMAND, id, wxID_ANY, \
			(wxObjectEventFunction)(wxEventFunction) wxStaticCastEvent(wxCommandEventFunction, &fn), \
			(wxObject*) nullptr \
			),

wxDECLARE_EVENT(wxEVT_HOST_COMMAND, wxCommandEvent);
