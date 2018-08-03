//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGadget.h"
#import "PXOneUpPresentationDelegate.h"
#import "PXSettingsKeyObserver.h"

@class NSArray, NSAttributedString, NSSet, NSString, PXAssetCollageView, PXAssetReference, PXFeedAssetsSectionInfo, PXGadgetSpec, PXPhotoKitAssetsDataSourceManager, PXPhotoKitUIMediaProvider, PXSharedAlbumHeaderView, UILabel, _PXSharedAlbumActivityGadgetContentView;

@interface PXSharedAlbumActivityGadget : NSObject <PXOneUpPresentationDelegate, PXSettingsKeyObserver, PXGadget>
{
    _Bool _wasAskedToLoadContentData;
    PXGadgetSpec *_gadgetSpec;
    unsigned long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXFeedAssetsSectionInfo *_assetsSectionInfo;
    _PXSharedAlbumActivityGadgetContentView *_contentView;
    PXSharedAlbumHeaderView *_headerView;
    PXAssetCollageView *_collageView;
    UILabel *_captionLabel;
    PXPhotoKitAssetsDataSourceManager *_assetsDataSourceManager;
    PXPhotoKitUIMediaProvider *_mediaProvider;
    PXAssetReference *_currentAssetReference;
    NSArray *_assets;
    NSAttributedString *_caption;
    NSSet *_oneUpHiddenAssetReferences;
    struct CGRect _visibleContentRect;
}

+ (void)preloadResources;
@property(copy, nonatomic) NSSet *oneUpHiddenAssetReferences; // @synthesize oneUpHiddenAssetReferences=_oneUpHiddenAssetReferences;
@property(copy, nonatomic) NSAttributedString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) PXAssetReference *currentAssetReference; // @synthesize currentAssetReference=_currentAssetReference;
@property(retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
@property(nonatomic) _Bool wasAskedToLoadContentData; // @synthesize wasAskedToLoadContentData=_wasAskedToLoadContentData;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) PXAssetCollageView *collageView; // @synthesize collageView=_collageView;
@property(retain, nonatomic) PXSharedAlbumHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) _PXSharedAlbumActivityGadgetContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property(retain, nonatomic) PXFeedAssetsSectionInfo *assetsSectionInfo; // @synthesize assetsSectionInfo=_assetsSectionInfo;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_handleCollageViewTap:(id)arg1;
- (void)_handleActionTap:(id)arg1;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_loadCaption;
- (void)_loadAssets;
- (_Bool)_isAccessibilityContentSize;
- (unsigned long long)_numberOfLinesForCaption;
- (void)_updateCollageView;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_layoutContentView;
@property(readonly, nonatomic) _Bool isContentViewLoaded;
- (void)_loadContentFromSectionInfo;
- (void)_updateCollageViewHiddenAssets;
- (void)_updateCollageViewVideoEnabled;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)uniqueGadgetIdentifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)hasLoadedContentData;
- (void)loadContentData;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;

@end

