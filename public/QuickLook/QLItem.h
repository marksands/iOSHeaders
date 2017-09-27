//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "QLPreviewItemPrivateProtocol.h"

@class FPItem, NSData, NSItemProvider, NSNumber, NSString, NSURL, NSUUID, QLItemFetcher, QLUTIAnalyzer, UIColor, UIDocumentInteractionController;

@interface QLItem : NSObject <QLPreviewItemPrivateProtocol, NSSecureCoding>
{
    long long _editedFileExtensionHandle;
    _Bool _useAVPlayerViewController;
    _Bool _useFullPDFTransition;
    _Bool _wantsPreviewInDebugViewController;
    _Bool _isPromisedItem;
    _Bool _canBeEdited;
    _Bool _canBeShared;
    _Bool _hasDeterminedShouldUseExtensionPreview;
    _Bool _shouldUseExtensionPreview;
    _Bool _hasDeterminedShouldUseExtensionThumbnail;
    _Bool _shouldUseExtensionThumbnail;
    NSNumber *_previewItemProviderProgress;
    NSURL *_editedFileURL;
    FPItem *_fpItem;
    id <QLPreviewItemPrivateProtocol> _originalPreviewItem;
    NSURL *_previewItemURL;
    NSData *_previewItemData;
    id <QLPreviewItemDataProvider> _previewItemDataProvider;
    NSString *_searchableItemIdentifier;
    NSString *_spotlightQueryString;
    NSString *_searchableItemApplicationBundleIdentifier;
    NSString *_relativePath;
    UIDocumentInteractionController *_archiveController;
    NSItemProvider *_previewItemProvider;
    NSNumber *_itemSize;
    QLItemFetcher *_fetcher;
    id <QLItemThumbnailGeneratorProtocolInternal> _thumbnailGenerator;
    QLUTIAnalyzer *_UTIAnalyzer;
    NSString *_previewItemContentType;
    UIColor *_backgroundColorOverride;
    NSString *_previewItemTitle;
    NSString *_password;
    NSUUID *_uuid;
    unsigned long long _previewItemType;
    unsigned long long _thumbnailItemType;
    long long _processIdentifier;
}

+ (id)_newEditedFileURLForItem:(id)arg1;
+ (id)encodedClasses;
+ (_Bool)supportsSecureCoding;
+ (id)itemWithPreviewItem:(id)arg1;
+ (_Bool)shouldUseRemoteCollection:(id)arg1;
+ (id)contentTypesToPreviewTypes;
+ (id)supportedContentTypes;
+ (id)_allPreviewClasses;
+ (unsigned long long)_previewItemTypeForPreviewClass:(Class)arg1;
@property(nonatomic) _Bool shouldUseExtensionThumbnail; // @synthesize shouldUseExtensionThumbnail=_shouldUseExtensionThumbnail;
@property(nonatomic) _Bool hasDeterminedShouldUseExtensionThumbnail; // @synthesize hasDeterminedShouldUseExtensionThumbnail=_hasDeterminedShouldUseExtensionThumbnail;
@property(nonatomic) _Bool shouldUseExtensionPreview; // @synthesize shouldUseExtensionPreview=_shouldUseExtensionPreview;
@property(nonatomic) _Bool hasDeterminedShouldUseExtensionPreview; // @synthesize hasDeterminedShouldUseExtensionPreview=_hasDeterminedShouldUseExtensionPreview;
@property(nonatomic) _Bool canBeShared; // @synthesize canBeShared=_canBeShared;
@property(nonatomic) _Bool canBeEdited; // @synthesize canBeEdited=_canBeEdited;
@property(nonatomic) _Bool isPromisedItem; // @synthesize isPromisedItem=_isPromisedItem;
@property long long processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property(nonatomic) unsigned long long thumbnailItemType; // @synthesize thumbnailItemType=_thumbnailItemType;
@property(nonatomic) unsigned long long previewItemType; // @synthesize previewItemType=_previewItemType;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_previewItemTitle;
@property(retain, nonatomic) UIColor *backgroundColorOverride; // @synthesize backgroundColorOverride=_backgroundColorOverride;
@property(retain, nonatomic) NSString *previewItemContentType; // @synthesize previewItemContentType=_previewItemContentType;
@property(retain, nonatomic) QLUTIAnalyzer *UTIAnalyzer; // @synthesize UTIAnalyzer=_UTIAnalyzer;
@property(retain, nonatomic) id <QLItemThumbnailGeneratorProtocolInternal> thumbnailGenerator; // @synthesize thumbnailGenerator=_thumbnailGenerator;
@property(retain, nonatomic) QLItemFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(retain, nonatomic) NSNumber *itemSize; // @synthesize itemSize=_itemSize;
@property(retain) NSItemProvider *previewItemProvider; // @synthesize previewItemProvider=_previewItemProvider;
@property(retain) UIDocumentInteractionController *archiveController; // @synthesize archiveController=_archiveController;
@property(retain) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(retain) NSString *searchableItemApplicationBundleIdentifier; // @synthesize searchableItemApplicationBundleIdentifier=_searchableItemApplicationBundleIdentifier;
@property(retain) NSString *spotlightQueryString; // @synthesize spotlightQueryString=_spotlightQueryString;
@property(retain) NSString *searchableItemIdentifier; // @synthesize searchableItemIdentifier=_searchableItemIdentifier;
@property(retain) id <QLPreviewItemDataProvider> previewItemDataProvider; // @synthesize previewItemDataProvider=_previewItemDataProvider;
@property(retain) NSData *previewItemData; // @synthesize previewItemData=_previewItemData;
@property(retain, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_previewItemURL;
@property(retain, nonatomic) id <QLPreviewItemPrivateProtocol> originalPreviewItem; // @synthesize originalPreviewItem=_originalPreviewItem;
@property(retain) FPItem *fpItem; // @synthesize fpItem=_fpItem;
@property _Bool wantsPreviewInDebugViewController; // @synthesize wantsPreviewInDebugViewController=_wantsPreviewInDebugViewController;
@property(retain, nonatomic) NSURL *editedFileURL; // @synthesize editedFileURL=_editedFileURL;
@property(retain, nonatomic) NSNumber *previewItemProviderProgress; // @synthesize previewItemProviderProgress=_previewItemProviderProgress;
@property(nonatomic) _Bool useFullPDFTransition; // @synthesize useFullPDFTransition=_useFullPDFTransition;
@property _Bool useAVPlayerViewController; // @synthesize useAVPlayerViewController=_useAVPlayerViewController;
- (void).cxx_destruct;
- (void)_setURLFromFPItem;
- (void)setEditedFileURL:(id)arg1 withSandboxExtension:(id)arg2;
@property(readonly) NSString *MIMEType;
- (_Bool)canBePreviewed;
- (id)createPreviewContext;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)internalCopy;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRelativePath:(id)arg1 archiveController:(id)arg2;
- (id)initWithSearchableItemUniqueIdentifier:(id)arg1 applicationBundleIdentifier:(id)arg2;
- (id)initWithSearchableItemUniqueIdentifier:(id)arg1 queryString:(id)arg2 applicationBundleIdentifier:(id)arg3 previewTitle:(id)arg4;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithDataProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3;
- (id)initWithData:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3;
- (id)initWithFPItem:(id)arg1;
- (id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4;
- (void)_commonInit;
- (_Bool)canBePrintedWithCustomPrinter;
- (struct CGSize)previewSizeForItemViewControllerSize:(struct CGSize)arg1;
- (unsigned long long)maximumNumberOfCachedPreviews;
- (long long)defaultWhitePointAdaptivityStyle;
- (_Bool)useExtensionThumbnail;
- (_Bool)useExtensionPreview;
- (Class)previewItemViewControllerClass;
- (unsigned long long)_getThumbnailItemType;
- (_Bool)isStandardQuickLookType;
- (unsigned long long)_getPreviewItemType;

// Remaining properties
@property(readonly) double autoPlaybackPosition;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSURL *previewItemURLForDisplay;
@property(readonly) Class superclass;
@property(readonly) _Bool wantsDefaultMediaPlayer;

@end

