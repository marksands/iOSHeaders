//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

#import "PUPhotosSectionHeaderViewDelegate.h"
#import "PUSearchGridDataSourceDelegate.h"

@class NSString, PUSearchGridDataSource;

__attribute__((visibility("hidden")))
@interface PUSearchGridViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSearchGridDataSourceDelegate>
{
    PUSearchGridDataSource *_searchGridDataSource;
    NSString *_emptyPlaceholderText;
}

@property(copy, nonatomic) NSString *emptyPlaceholderText; // @synthesize emptyPlaceholderText=_emptyPlaceholderText;
@property(retain, nonatomic) PUSearchGridDataSource *searchGridDataSource; // @synthesize searchGridDataSource=_searchGridDataSource;
- (void).cxx_destruct;
- (void)searchGridDataSourceHasPendingChanges:(id)arg1;
- (_Bool)allowSlideshowButton;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
- (id)_subtitle;
- (_Bool)_containsScene;
- (void)_updateNavigationTitleView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

