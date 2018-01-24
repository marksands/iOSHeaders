//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

__attribute__((visibility("hidden")))
@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _showingInspectorPane;
    _Bool _inspectorPaneAutoHidden;
    _Bool _showingSidebar;
    _Bool _showingNavigatorViewInSidebar;
    _Bool _showingPresenterNotes;
    _Bool _showingLightTable;
    _Bool _showingMasterSlides;
    _Bool _showingElementList;
    long long _inspectorPaneViewMode;
}

+ (id)uiLayoutFromArchive:(const struct DesktopUILayoutArchive *)arg1 unarchiver:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic, getter=isShowingElementList) _Bool showingElementList; // @synthesize showingElementList=_showingElementList;
@property(readonly, nonatomic, getter=isShowingMasterSlides) _Bool showingMasterSlides; // @synthesize showingMasterSlides=_showingMasterSlides;
@property(readonly, nonatomic) long long inspectorPaneViewMode; // @synthesize inspectorPaneViewMode=_inspectorPaneViewMode;
@property(readonly, nonatomic, getter=isShowingPresenterNotes) _Bool showingPresenterNotes; // @synthesize showingPresenterNotes=_showingPresenterNotes;
@property(readonly, nonatomic, getter=isShowingLightTable) _Bool showingLightTable; // @synthesize showingLightTable=_showingLightTable;
@property(readonly, nonatomic, getter=isShowingSidebar) _Bool showingSidebar; // @synthesize showingSidebar=_showingSidebar;
@property(readonly, nonatomic, getter=p_isShowingNavigatorViewInSidebar) _Bool p_showingNavigatorViewInSidebar;
@property(readonly, nonatomic) long long inspectorPaneHiddenState;
@property(readonly, nonatomic) long long sidebarViewMode;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)saveToArchive:(struct DesktopUILayoutArchive *)arg1 archiver:(id)arg2;
- (_Bool)inspectorPaneAutoHidden;
- (void)setInspectorPaneAutoHidden:(_Bool)arg1;
- (_Bool)showingInspectorPane;
- (void)setShowingInspectorPane:(_Bool)arg1;
- (id)archivedUILayoutInContext:(id)arg1;

@end

