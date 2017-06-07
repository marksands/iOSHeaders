//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsUIViewController.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSString, PXPeopleDetailStatusOverlayView, UIScrollView;

@interface PXPeopleDetailViewController : PXPhotosDetailsUIViewController <PXPhotoLibraryUIChangeObserver>
{
    _Bool _processingFaces;
    NSArray *_people;
    PXPeopleDetailStatusOverlayView *_overlayView;
    UIScrollView *_overlayScrollView;
}

@property(retain, nonatomic) UIScrollView *overlayScrollView; // @synthesize overlayScrollView=_overlayScrollView;
@property(retain, nonatomic) PXPeopleDetailStatusOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
@property(nonatomic, getter=isProcessingFaces) _Bool processingFaces; // @synthesize processingFaces=_processingFaces;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (void)_applicationBecameActive:(id)arg1;
- (void)_updateDataSourceWithCollectionForPerson:(id)arg1;
- (void)_launchNaming:(id)arg1;
- (void)_updateHeader;
- (void)_setupHeader;
- (void)viewDidLayoutSubviews;
- (void)_setupProcessingOverlayView;
- (void)_loadComposition;
- (id)_assetCollectionListFetchResultForPeople:(id)arg1 assetCount:(unsigned long long *)arg2;
- (void)_createNewDetailView:(id)arg1;
- (void)refreshName;
- (void)refreshPeople;
- (void)presentBootstrapViewControllerWithType:(unsigned long long)arg1;
- (_Bool)shouldUpdateStatusBarTitle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPeople:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

