//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import "PXOneUpPresentationDelegate.h"

@class NSArray, NSString, PXAssetReference, PXAssetsDataSourceManager, PXUIMediaProvider;

@interface PXSampleSuggestionProvider : PXGadgetProvider <PXOneUpPresentationDelegate>
{
    PXUIMediaProvider *_mediaProvider;
    _Bool _includeHorizontal;
    NSArray *_suggestions;
    NSArray *_assets;
    PXAssetReference *_oneUpInitialAssetReference;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
}

@property(retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager; // @synthesize oneUpDataSourceManager=_oneUpDataSourceManager;
@property(retain, nonatomic) PXAssetReference *oneUpInitialAssetReference; // @synthesize oneUpInitialAssetReference=_oneUpInitialAssetReference;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(nonatomic) _Bool includeHorizontal; // @synthesize includeHorizontal=_includeHorizontal;
- (void).cxx_destruct;
- (id)_gadgetForAssetReference:(id)arg1;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (void)suggestionGadget:(id)arg1 willDismissPreviewController:(id)arg2;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (id)suggestionGadgetPreviewController:(id)arg1;
- (void)suggestionGadgetsWantsOneUpPresentation:(id)arg1;
- (void)_prepareForOneUpPresentationForGadget:(id)arg1;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (id)_fetchOptionsForPlaybackStyle:(long long)arg1;
- (id)_fetchOptionsForHistoricImage;
- (id)_lastYearsDate;
- (id)_fetchSingleAnimatedImage;
- (id)_fetchSingleLoopingVideo;
- (id)_fetchSingleVideo;
- (id)_fetchSinglePortraitImage;
- (id)_fetchSingleAssetWithVariation:(unsigned short)arg1;
- (id)_fetchSingleLivePhotoAssetWithVariation:(unsigned short)arg1;
- (id)_fetchHistoricImage;
- (id)_fetchSingleImage;
- (void)generateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)loadDataForGadgets;
- (id)init;
- (id)initWithHorizontalGadget:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

