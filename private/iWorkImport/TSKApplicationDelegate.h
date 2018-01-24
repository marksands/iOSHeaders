//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKApplicationDelegate.h"

@class NSArray, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate>
{
    id <TSKCompatibilityDelegate> _compatibilityDelegate;
    NSArray *_availableLanguages;
    NSString *_initialInputLanguage;
}

+ (id)documentDirectoryPath;
+ (id)sharedDelegate;
+ (void)setDelegate:(id)arg1;
+ (id)platform_sharedDelegate;
@property(readonly, nonatomic) NSString *initialInputLanguage; // @synthesize initialInputLanguage=_initialInputLanguage;
@property(readonly, nonatomic) NSArray *availableLanguages; // @synthesize availableLanguages=_availableLanguages;
@property(retain, nonatomic) id <TSKCompatibilityDelegate> compatibilityDelegate; // @synthesize compatibilityDelegate=_compatibilityDelegate;
- (void).cxx_destruct;
- (void)collectDocumentCreationAnalyticsWithLogger:(id)arg1;
- (void)logDocumentCreationWithImportState:(_Bool)arg1;
- (void)collectAppLaunchAnalyticsWithLogger:(id)arg1;
- (void)logAppLaunchAnalytics;
@property(readonly, nonatomic) NSDate *applicationLaunchTime;
@property(readonly, nonatomic) NSString *bladerunnerContainerIdentifier;
@property(readonly, nonatomic) NSString *cloudKitContainerIdentifier;
@property(readonly, copy, nonatomic) NSData *iWorkTextDefaultsPassphraseVerifier;
- (void)setAppTextDefaults:(id)arg1 passphraseVerifier:(id)arg2;
@property(readonly, copy, nonatomic) id appTextDefaults;
@property(copy, nonatomic) NSString *iWorkAuthorPrivateID; // @dynamic iWorkAuthorPrivateID;
@property(nonatomic) unsigned long long iWorkAuthorColorIndex;
@property(copy, nonatomic) NSString *iWorkAuthorName;
@property(readonly, getter=isInBackground) _Bool inBackground;
@property(readonly, getter=isActivating) _Bool activating;
@property(readonly, nonatomic) _Bool performanceModeEnabled;
@property(readonly, nonatomic) _Bool designModeEnabled;
- (id)defaultHyperlinkURL;
- (_Bool)openURL:(id)arg1 withDocumentRoot:(id)arg2;
- (_Bool)openURL:(id)arg1;
- (id)invalidURLSchemes;
- (Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) _Bool supportsInlineNativeEquationObjects;
- (id)appChartPropertyOverrides;
- (void)customizeHyperlinkViewController:(id)arg1;
- (id)previewImageForType:(id)arg1;
@property(readonly, nonatomic) _Bool imageGalleryCaptionsUsePlaceholderText;
- (_Bool)shouldValidateMasterLayoutWhileInsertingRows;
@property(readonly, nonatomic) _Bool supportsCanvasNativeEquationObjects;
@property(readonly, nonatomic) _Bool supportsLinkedTextBoxes;
- (_Bool)supportsAutosizingTextboxes;
- (_Bool)supportsShrinkTextToFit;
- (_Bool)sidebarPositionRespectsUserInterfaceLayoutDirection;
- (_Bool)supportsRTL;
@property(readonly, nonatomic) _Bool supportsPastingIntoGroups;
- (_Bool)shouldRenderLargeImages;
- (_Bool)shouldRenderCurvedShadow;
- (_Bool)shouldRenderContactShadow;
- (struct CGRect)applicationToolbarFrame;
@property(readonly, nonatomic) _Bool isCanvasFullScreen;
- (id)createCompatibilityDelegate;
@property(readonly, nonatomic) NSString *templateTypeDisplayName;
@property(readonly, nonatomic) NSString *documentTypeDisplayNameForSharingInvitation;
@property(readonly, nonatomic) NSString *documentTypeDisplayName;
- (id)applicationNameForTitleBar;
@property(readonly, nonatomic) unsigned long long applicationType;
@property(readonly, nonatomic) NSString *applicationDisplayName;
@property(readonly, nonatomic) NSString *applicationName;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) _Bool textInspectorShowsMoreSubpane;
@property(readonly, nonatomic) _Bool tableCellInspectorShowsNaturalAlignment;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property(readonly, nonatomic) _Bool tableHeaderInspectorShowsFreezeHeaderRowsSwitch;

@end

