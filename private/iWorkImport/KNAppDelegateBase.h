//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface KNAppDelegateBase : TSABaseApplicationDelegate
{
    _Bool _cachedBidiIsSupported;
}

- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (void)p_inputMethodsChanged:(id)arg1;
- (_Bool)supportsShrinkTextToFit;
- (_Bool)sidebarPositionRespectsUserInterfaceLayoutDirection;
- (_Bool)supportsRTL;
- (_Bool)supportsPastingIntoGroups;
- (void)applicationDidFinishLaunching;
- (id)defaultHyperlinkURL;
- (_Bool)URLIsValidForImportedHyperlink:(id)arg1 targetDocumentRoot:(id)arg2;
- (id)invalidURLSchemes;
- (void)registerAllowedElementKinds;
- (void)registerClassTypeMappings;
- (void)registerSOSClassTypeMappings;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)stringForDocumentViewOnlyMessage;
- (id)stringForDocumentViewOnlyTitle;
- (id)stringForOwnerHasCollabEnabledMessage;
- (id)stringForOwnerHasCollabEnabledTitle;
- (id)stringForBoxCollaborationOptInMessage;
- (id)stringForCouldntCreatePDFTitle;
- (id)stringForCloseDocumentConfirmationWillContinueToUpdateInformativeText;
- (id)stringForCloseDocumentConfirmationAlertMessage;
- (id)stringForApplicationUpdateError;
- (id)stringForDocumentViewOnly;
- (id)stringForCollaborationConnecting;
- (id)stringForCollaborationOnline;
- (id)stringForGenericServerUnreachable;
- (id)stringForICloudUnreachable;
- (id)stringForCollaborationOffline;
- (id)stringForRemoveLastPrivateParticipantAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationTitle;
- (id)stringForStopSharingAlertConfirmationMessage;
- (id)stringForStopSharingAlertConfirmationTitle;
- (id)stringForLearnMoreSharingURL;
- (id)sharedAlertMessageWithUserName:(id)arg1;
- (id)sharedReadOnlyAlertMessageWithUserName:(id)arg1;
- (id)stringForCollaboratorsBlockedWhileOffline;
- (id)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
- (id)stringForRemoteVersionRestorationAlertMessage;
- (id)stringForDocumentUpdatedByOwnerWithKeepDetails;
- (id)stringForDocumentUpdatedByOwnerDetails;
- (id)stringForDocumentUpdated;
- (id)stringForDocumentUpdatedTitle;
- (id)stringForCloseDocument;
- (id)stringForOwnerPasswordOnConflictAlertMessage;
- (id)stringForOwnerPasswordOnConflictAlertTitle;
- (id)stringForCollaborator1_6ConflictWithKeepDetails;
- (id)stringForCollaborator1_6ConflictDetails;
- (id)stringForCollaboratorConflictWithKeepDetails;
- (id)stringForCollaboratorConflictDetails;
- (id)stringForUpdatingDocumentWithoutServiceType;
- (id)stringForCollaboratorConflict;
- (id)templateTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)documentTypeDisplayName;
- (id)applicationDisplayName;
- (id)applicationName;
- (unsigned long long)applicationType;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateSFFDocumentType;
- (id)templateDocumentType;
- (id)nativeDocumentType;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;
- (id)appChartPropertyOverrides;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg1;
- (id)createCompatibilityDelegate;
@property(readonly, nonatomic) NSArray *powerPointDocumentTypes;
- (id)importableDocumentTypes;
- (Class)documentRootClass;
- (id)init;

@end

