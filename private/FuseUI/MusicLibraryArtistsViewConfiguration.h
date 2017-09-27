//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class MusicEntityViewDescriptor;

@interface MusicLibraryArtistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration
{
    MusicEntityViewDescriptor *_artistsTableViewDescriptor;
    MusicEntityViewDescriptor *_recentlyAddedOverviewTableViewDescriptor;
    _Bool _shouldIncludeRecentlyAddedOverview;
}

@property(nonatomic) _Bool shouldIncludeRecentlyAddedOverview; // @synthesize shouldIncludeRecentlyAddedOverview=_shouldIncludeRecentlyAddedOverview;
- (void).cxx_destruct;
- (id)_recentlyAddedOverviewTableViewDescriptor;
- (id)_loadRecentlyAddedOverviewTableViewDescriptor;
- (id)_loadRecentlyAddedOverviewEntityProvider;
- (id)_loadTableViewDescriptor;
- (id)_loadArtistsTableViewDescriptor;
- (id)_loadArtistsEntityProvider;
- (id)_entityViewDescriptorsForCurrentProperties;
- (id)_detailViewControllerForEntityValueContext:(id)arg1 sourceViewController:(id)arg2;
- (id)_artistsTableViewDescriptor;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)canPreviewEntityValueContext:(id)arg1;
- (void)configureContentDescriptorForSearchResults:(id)arg1;
- (id)loadEntityViewDescriptor;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)wantsToDisplayDetailViewControllerUponEntityValueProviderSelection;
- (id)init;

@end

