//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FuseUI/MusicLibraryCollectionBasedTableViewConfiguration.h>

@interface MusicMediaPickerLibraryAlbumsViewConfiguration : MusicLibraryCollectionBasedTableViewConfiguration
{
    _Bool _isMultipleSelectionAllowed;
    _Bool _picksSingleCollection;
}

- (void)_picksSingleCollectionDidChange:(id)arg1;
- (void)_multipleSelectionAllowanceDidChange:(id)arg1;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)canPreviewEntityValueContext:(id)arg1;
- (void)_configureAccessoriesForDescriptor:(id)arg1;
- (id)loadEntityViewDescriptor;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)dealloc;
- (id)initWithFilterPredicate:(id)arg1 multipleSelectionAllowed:(_Bool)arg2 includeCompilations:(_Bool)arg3 picksSingleCollection:(_Bool)arg4;
- (id)initWithBrowseCollectionViewConfiguration:(id)arg1;
- (id)init;

@end

