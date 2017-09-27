//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class DOCConcreteLocation, NSArray, NSString;

@interface DOCConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldIgnoreInteractionMode;
    _Bool _inProcess;
    _Bool _forPickingDocuments;
    _Bool _sourceIsManaged;
    _Bool _neverCreateBookmarkForOpenInPlace;
    _Bool _pickingItemsShouldBumpLastOpenDate;
    _Bool _suppressBlackCallout;
    _Bool _singleSourceMode;
    _Bool _preferLastUsedDate;
    _Bool _shouldOpenInApp;
    _Bool _restoreLastVisitedLocation;
    _Bool _saveLastVisitedLocation;
    _Bool _observeCollectionControls;
    _Bool _collectionSupportsDragAndDrop;
    _Bool _sourceIsWritableFileProvider;
    _Bool _capNumberOfItemsDynamically;
    _Bool _skipDownload;
    _Bool _showCollectionControls;
    _Bool _showListModeButton;
    _Bool _showSearchInNavBar;
    _Bool _showSearchInCollection;
    _Bool _shouldAdjustContentInset;
    _Bool _useSharedQuickLook;
    _Bool _useExpandedSourceList;
    _Bool _showLocationPopover;
    _Bool _onlyShowiCloudDrive;
    _Bool _enableThumbnailFadeAnimation;
    DOCConcreteLocation *_defaultLocation;
    unsigned long long _interactionMode;
    NSArray *_excludedDocumentTypes;
    NSArray *_urls;
    NSString *_hostIdentifier;
    NSArray *_hiddenSourcesIdentifiers;
    unsigned long long _maximumNumberOfItemsToFetch;
    unsigned long long _maximumNumberOfRows;
    unsigned long long _browserViewContext;
    NSString *_roleIdentifier;
    NSArray *_forbiddenActionIdentifiers;
    double _thumbnailFetchingTimeOut;
    NSArray *_documentTypes;
}

+ (_Bool)supportsSecureCoding;
+ (id)configurationForExportingDocumentsToURLs:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForImportingDocumentsWithContentTypes:(id)arg1 mode:(unsigned long long)arg2;
+ (id)configurationForOpeningDocumentsOfApplicationWithBundleIdentifier:(id)arg1;
@property(copy, nonatomic) NSArray *documentTypes; // @synthesize documentTypes=_documentTypes;
@property _Bool enableThumbnailFadeAnimation; // @synthesize enableThumbnailFadeAnimation=_enableThumbnailFadeAnimation;
@property double thumbnailFetchingTimeOut; // @synthesize thumbnailFetchingTimeOut=_thumbnailFetchingTimeOut;
@property(retain) NSArray *forbiddenActionIdentifiers; // @synthesize forbiddenActionIdentifiers=_forbiddenActionIdentifiers;
@property(copy, nonatomic) NSString *roleIdentifier; // @synthesize roleIdentifier=_roleIdentifier;
@property unsigned long long browserViewContext; // @synthesize browserViewContext=_browserViewContext;
@property _Bool onlyShowiCloudDrive; // @synthesize onlyShowiCloudDrive=_onlyShowiCloudDrive;
@property _Bool showLocationPopover; // @synthesize showLocationPopover=_showLocationPopover;
@property _Bool useExpandedSourceList; // @synthesize useExpandedSourceList=_useExpandedSourceList;
@property _Bool useSharedQuickLook; // @synthesize useSharedQuickLook=_useSharedQuickLook;
@property _Bool shouldAdjustContentInset; // @synthesize shouldAdjustContentInset=_shouldAdjustContentInset;
@property _Bool showSearchInCollection; // @synthesize showSearchInCollection=_showSearchInCollection;
@property _Bool showSearchInNavBar; // @synthesize showSearchInNavBar=_showSearchInNavBar;
@property _Bool showListModeButton; // @synthesize showListModeButton=_showListModeButton;
@property _Bool showCollectionControls; // @synthesize showCollectionControls=_showCollectionControls;
@property _Bool skipDownload; // @synthesize skipDownload=_skipDownload;
@property _Bool capNumberOfItemsDynamically; // @synthesize capNumberOfItemsDynamically=_capNumberOfItemsDynamically;
@property unsigned long long maximumNumberOfRows; // @synthesize maximumNumberOfRows=_maximumNumberOfRows;
@property unsigned long long maximumNumberOfItemsToFetch; // @synthesize maximumNumberOfItemsToFetch=_maximumNumberOfItemsToFetch;
@property _Bool sourceIsWritableFileProvider; // @synthesize sourceIsWritableFileProvider=_sourceIsWritableFileProvider;
@property _Bool collectionSupportsDragAndDrop; // @synthesize collectionSupportsDragAndDrop=_collectionSupportsDragAndDrop;
@property _Bool observeCollectionControls; // @synthesize observeCollectionControls=_observeCollectionControls;
@property _Bool saveLastVisitedLocation; // @synthesize saveLastVisitedLocation=_saveLastVisitedLocation;
@property _Bool restoreLastVisitedLocation; // @synthesize restoreLastVisitedLocation=_restoreLastVisitedLocation;
@property(copy, nonatomic) NSArray *hiddenSourcesIdentifiers; // @synthesize hiddenSourcesIdentifiers=_hiddenSourcesIdentifiers;
@property _Bool shouldOpenInApp; // @synthesize shouldOpenInApp=_shouldOpenInApp;
@property _Bool preferLastUsedDate; // @synthesize preferLastUsedDate=_preferLastUsedDate;
@property _Bool singleSourceMode; // @synthesize singleSourceMode=_singleSourceMode;
@property _Bool suppressBlackCallout; // @synthesize suppressBlackCallout=_suppressBlackCallout;
@property _Bool pickingItemsShouldBumpLastOpenDate; // @synthesize pickingItemsShouldBumpLastOpenDate=_pickingItemsShouldBumpLastOpenDate;
@property _Bool neverCreateBookmarkForOpenInPlace; // @synthesize neverCreateBookmarkForOpenInPlace=_neverCreateBookmarkForOpenInPlace;
@property _Bool sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property _Bool forPickingDocuments; // @synthesize forPickingDocuments=_forPickingDocuments;
@property(copy, nonatomic) NSString *hostIdentifier; // @synthesize hostIdentifier=_hostIdentifier;
@property(retain) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSArray *excludedDocumentTypes; // @synthesize excludedDocumentTypes=_excludedDocumentTypes;
@property _Bool inProcess; // @synthesize inProcess=_inProcess;
@property _Bool shouldIgnoreInteractionMode; // @synthesize shouldIgnoreInteractionMode=_shouldIgnoreInteractionMode;
@property unsigned long long interactionMode; // @synthesize interactionMode=_interactionMode;
@property(retain) DOCConcreteLocation *defaultLocation; // @synthesize defaultLocation=_defaultLocation;
- (void).cxx_destruct;
- (unsigned long long)interactionModeForPreparing;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

