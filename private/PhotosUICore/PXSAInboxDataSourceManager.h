//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXInboxModelDataSourceManager.h>

#import "PXFeedSectionInfosManagerDelegate.h"
#import "PXInboxModelMediaProvider.h"
#import "PXInboxProviderSource.h"

@class NSString, PXFeedSectionInfosManager, PXSAInboxDataSource, PXSAInboxDetailViewControllerProvider, PXSAInboxTitleProvider;

@interface PXSAInboxDataSourceManager : PXInboxModelDataSourceManager <PXFeedSectionInfosManagerDelegate, PXInboxProviderSource, PXInboxModelMediaProvider>
{
    PXFeedSectionInfosManager *_feedSectionInfosManager;
    PXSAInboxTitleProvider *_sharedAlbumTitleProvider;
    PXSAInboxDetailViewControllerProvider *_sharedAlbumDetailViewControllerProvider;
}

@property(retain, nonatomic) PXSAInboxDetailViewControllerProvider *sharedAlbumDetailViewControllerProvider; // @synthesize sharedAlbumDetailViewControllerProvider=_sharedAlbumDetailViewControllerProvider;
@property(retain, nonatomic) PXSAInboxTitleProvider *sharedAlbumTitleProvider; // @synthesize sharedAlbumTitleProvider=_sharedAlbumTitleProvider;
@property(retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager; // @synthesize feedSectionInfosManager=_feedSectionInfosManager;
- (void).cxx_destruct;
- (int)requestImageForPreviewItem:(id)arg1 targetSize:(struct CGSize)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)feedSectionInfosManager:(id)arg1 sectionInfosDidChange:(id)arg2;
- (id)_sectionInfosForDataSource;
- (id)_dataSourceSnapshot;
- (void)_updateDataSource;
@property(readonly, nonatomic) id <PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@property(readonly, nonatomic) id <PXInboxModelMediaProvider> mediaProvider;
@property(readonly, nonatomic) id <PXInboxModelTitleProvider> titleProvider;
- (id)providerSource;
- (id)createInitialDataSource;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXSAInboxDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

