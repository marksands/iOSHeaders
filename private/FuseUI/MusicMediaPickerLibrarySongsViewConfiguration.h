//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibrarySongsViewConfiguration.h>

@interface MusicMediaPickerLibrarySongsViewConfiguration : MusicLibrarySongsViewConfiguration
{
    _Bool _isMultipleSelectionAllowed;
}

- (void)_multipleSelectionAllowanceDidChange:(id)arg1;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (_Bool)canPreviewEntityValueContext:(id)arg1;
- (id)loadEntityViewDescriptor;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)dealloc;
- (id)initWithMultipleSelectionAllowed:(_Bool)arg1;
- (id)init;

@end

