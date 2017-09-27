//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FuseUI/MusicLibraryPlaylistsViewConfiguration.h>

@interface MusicMediaPickerPlaylistsViewConfiguration : MusicLibraryPlaylistsViewConfiguration
{
    _Bool _picksSingleCollection;
}

- (void)_picksSingleCollectionDidChange:(id)arg1;
- (void)_watchCompatibilityVersionDidChange:(id)arg1;
- (void)_multipleSelectionAllowanceDidChange:(id)arg1;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)canPreviewEntityValueContext:(id)arg1;
- (void)_configureAccessoriesForDescriptor:(id)arg1;
- (id)loadEntityViewDescriptor;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)dealloc;
- (id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2 picksSingleCollection:(_Bool)arg3;
- (id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2;
- (id)init;

@end

