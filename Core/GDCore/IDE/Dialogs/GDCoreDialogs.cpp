//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: GDCoreDialogs.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "GDCoreDialogs.h"


// Declare the bitmap loading function
extern void wxC629BInitBitmapResources();

static bool bBitmapLoaded = false;


LayersEditorPanelBase::LayersEditorPanelBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC629BInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    m_auimgr = new wxAuiManager;
    m_auimgr->SetManagedWindow( this );
    m_auimgr->SetFlags( wxAUI_MGR_LIVE_RESIZE|wxAUI_MGR_TRANSPARENT_HINT|wxAUI_MGR_TRANSPARENT_DRAG|wxAUI_MGR_ALLOW_ACTIVE_PANE|wxAUI_MGR_ALLOW_FLOATING);
    m_auimgr->GetArtProvider()->SetMetric( wxAUI_DOCKART_PANE_BORDER_SIZE, 0);
    m_auimgr->GetArtProvider()->SetMetric(wxAUI_DOCKART_GRADIENT_TYPE, wxAUI_GRADIENT_NONE);
    
    m_toolbar = new wxAuiToolBar(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxAUI_TB_PLAIN_BACKGROUND|wxAUI_TB_DEFAULT_STYLE);
    m_toolbar->SetToolBitmapSize(wxSize(16,16));
    
    m_auimgr->AddPane(m_toolbar, wxAuiPaneInfo().Caption(_("Layers editor")).Direction(wxAUI_DOCK_TOP).Layer(0).Row(0).Position(0).Fixed().CaptionVisible(false).MaximizeButton(false).CloseButton(false).MinimizeButton(false).PinButton(false));
    
    m_toolbar->AddTool(ADD_LAYER_TOOL, _("Add a layer"), wxXmlResource::Get()->LoadBitmap(wxT("add16")), wxNullBitmap, wxITEM_NORMAL, _("Add a new layer"), wxT(""), NULL);
    
    m_toolbar->AddTool(DELETE_LAYER_TOOL, _("Delete the selected layer"), wxXmlResource::Get()->LoadBitmap(wxT("delete16")), wxNullBitmap, wxITEM_NORMAL, _("Delete the selected layer"), wxT(""), NULL);
    
    m_toolbar->AddSeparator();
    
    m_toolbar->AddTool(EDIT_LAYER_TOOL, _("Edit the properties of the layer"), wxXmlResource::Get()->LoadBitmap(wxT("properties16")), wxNullBitmap, wxITEM_NORMAL, _("Edit the properties of the layer"), wxT(""), NULL);
    
    m_toolbar->AddTool(LAYER_UP_TOOL, _("Move the layer over"), wxXmlResource::Get()->LoadBitmap(wxT("up16")), wxNullBitmap, wxITEM_NORMAL, _("Move the layer over"), wxT(""), NULL);
    
    m_toolbar->AddTool(LAYER_DOWN_TOOL, _("Move the layer below"), wxXmlResource::Get()->LoadBitmap(wxT("down16")), wxNullBitmap, wxITEM_NORMAL, _("Move the layer below"), wxT(""), NULL);
    
    m_toolbar->AddSeparator();
    
    m_toolbar->AddTool(REFRESH_TOOL, _("Refresh the list"), wxXmlResource::Get()->LoadBitmap(wxT("refreshicon")), wxNullBitmap, wxITEM_NORMAL, _("Refresh the list"), wxT(""), NULL);
    
    m_toolbar->AddSeparator();
    
    m_toolbar->AddTool(HELP_TOOL, _("Help"), wxXmlResource::Get()->LoadBitmap(wxT("help16")), wxNullBitmap, wxITEM_NORMAL, _("Display help about the layers editor"), wxT(""), NULL);
    m_toolbar->Realize();
    
    m_panel7 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    m_auimgr->AddPane(m_panel7, wxAuiPaneInfo().Direction(wxAUI_DOCK_CENTER).Layer(0).Row(0).Position(0).BestSize(100,100).MinSize(100,100).MaxSize(100,100).CaptionVisible(false).MaximizeButton(false).CloseButton(false).MinimizeButton(false).PinButton(false));
    m_auimgr->Update();
    
    wxFlexGridSizer* flexGridSizer13 = new wxFlexGridSizer(1, 1, 0, 0);
    flexGridSizer13->SetFlexibleDirection( wxBOTH );
    flexGridSizer13->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer13->AddGrowableCol(0);
    flexGridSizer13->AddGrowableRow(0);
    m_panel7->SetSizer(flexGridSizer13);
    
    m_layersList = new wxListCtrl(m_panel7, LAYERS_LIST_ID, wxDefaultPosition, wxDefaultSize, wxLC_REPORT);
    flexGridSizer13->Add(m_layersList, 0, wxALL|wxEXPAND, 0);
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    this->Connect(ADD_LAYER_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnAddLayerClicked), NULL, this);
    this->Connect(DELETE_LAYER_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnDeleteLayerClicked), NULL, this);
    this->Connect(EDIT_LAYER_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnEditLayerClicked), NULL, this);
    this->Connect(LAYER_UP_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnLayerUpClicked), NULL, this);
    this->Connect(LAYER_DOWN_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnLayerDownClicked), NULL, this);
    this->Connect(REFRESH_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnRefreshClicked), NULL, this);
    this->Connect(HELP_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnHelpClicked), NULL, this);
    
}

LayersEditorPanelBase::~LayersEditorPanelBase()
{
    this->Disconnect(ADD_LAYER_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnAddLayerClicked), NULL, this);
    this->Disconnect(DELETE_LAYER_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnDeleteLayerClicked), NULL, this);
    this->Disconnect(EDIT_LAYER_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnEditLayerClicked), NULL, this);
    this->Disconnect(LAYER_UP_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnLayerUpClicked), NULL, this);
    this->Disconnect(LAYER_DOWN_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnLayerDownClicked), NULL, this);
    this->Disconnect(REFRESH_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnRefreshClicked), NULL, this);
    this->Disconnect(HELP_TOOL, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(LayersEditorPanelBase::OnHelpClicked), NULL, this);
    
    m_auimgr->UnInit();
    delete m_auimgr;

}

BaseGroupEventDialog::BaseGroupEventDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC629BInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxFlexGridSizer* flexGridSizer41 = new wxFlexGridSizer(0, 1, 0, 0);
    flexGridSizer41->SetFlexibleDirection( wxBOTH );
    flexGridSizer41->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer41->AddGrowableCol(0);
    flexGridSizer41->AddGrowableRow(0);
    this->SetSizer(flexGridSizer41);
    
    wxFlexGridSizer* flexGridSizer43 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer43->SetFlexibleDirection( wxBOTH );
    flexGridSizer43->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer43->AddGrowableCol(1);
    
    flexGridSizer41->Add(flexGridSizer43, 1, wxALL|wxEXPAND, 5);
    
    m_staticText49 = new wxStaticText(this, wxID_ANY, _("Group name:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer43->Add(m_staticText49, 0, wxALL, 5);
    
    groupNameEdit = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer43->Add(groupNameEdit, 0, wxALL|wxEXPAND, 5);
    
    flexGridSizer43->Add(0, 0, 1, wxALL, 5);
    
    backColorBt = new wxButton(this, wxID_ANY, _("Choose background color"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer43->Add(backColorBt, 0, wxALL|wxEXPAND, 5);
    
    m_staticLine47 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxLI_HORIZONTAL);
    
    flexGridSizer41->Add(m_staticLine47, 0, wxALL|wxEXPAND, 5);
    
    wxFlexGridSizer* flexGridSizer45 = new wxFlexGridSizer(0, 4, 0, 0);
    flexGridSizer45->SetFlexibleDirection( wxBOTH );
    flexGridSizer45->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer45->AddGrowableCol(1);
    
    flexGridSizer41->Add(flexGridSizer45, 1, wxALL|wxEXPAND, 5);
    
    m_staticBitmap63 = new wxStaticBitmap(this, wxID_ANY, wxXmlResource::Get()->LoadBitmap(wxT("help16")), wxDefaultPosition, wxSize(-1,-1), 0 );
    
    flexGridSizer45->Add(m_staticBitmap63, 0, wxALL, 5);
    
    m_hyperLink65 = new wxHyperlinkCtrl(this, wxID_ANY, _("Help"), wxT("http://wiki.compilgames.net/doku.php/en/game_develop/documentation/manual/group_events"), wxDefaultPosition, wxSize(-1,-1), wxHL_DEFAULT_STYLE);
    m_hyperLink65->SetNormalColour(wxColour(wxT("#0000FF")));
    m_hyperLink65->SetHoverColour(wxColour(wxT("#0000FF")));
    m_hyperLink65->SetVisitedColour(wxColour(wxT("#FF0000")));
    
    flexGridSizer45->Add(m_hyperLink65, 0, wxRIGHT, 5);
    
    okBt = new wxButton(this, wxID_ANY, _("Ok"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer45->Add(okBt, 0, wxALL|wxALIGN_RIGHT, 5);
    
    cancelBt = new wxButton(this, wxID_ANY, _("Cancel"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer45->Add(cancelBt, 0, wxALL, 5);
    
    SetSizeHints(400,200);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    backColorBt->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseGroupEventDialog::onChooseBackgroundBtClick), NULL, this);
    okBt->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseGroupEventDialog::onOkBtClick), NULL, this);
    cancelBt->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseGroupEventDialog::onCancelBtClick), NULL, this);
    
}

BaseGroupEventDialog::~BaseGroupEventDialog()
{
    backColorBt->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseGroupEventDialog::onChooseBackgroundBtClick), NULL, this);
    okBt->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseGroupEventDialog::onOkBtClick), NULL, this);
    cancelBt->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(BaseGroupEventDialog::onCancelBtClick), NULL, this);
    
}
