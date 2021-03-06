//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OpusFoundation/OFUIViewController.h>

#import "OFUIGridViewDataSource.h"
#import "OFUIWindowDraggingSource.h"
#import "UIScrollViewDelegate.h"

@class NSOperationQueue, NSString, OFUIGridView;

@interface OFUIGridViewController : OFUIViewController <OFUIGridViewDataSource, UIScrollViewDelegate, OFUIWindowDraggingSource>
{
    unsigned long long _gridViewStyle;
    NSOperationQueue *_operationQueue;
    _Bool _hideWhenDeviceRotates;
    _Bool _maintainPercentageScrolledWhenDeviceRotates;
    OFUIGridView *_gridView;
}

+ (Class)gridViewClass;
@property(nonatomic) _Bool maintainPercentageScrolledWhenDeviceRotates; // @synthesize maintainPercentageScrolledWhenDeviceRotates=_maintainPercentageScrolledWhenDeviceRotates;
@property(nonatomic) _Bool hideWhenDeviceRotates; // @synthesize hideWhenDeviceRotates=_hideWhenDeviceRotates;
@property(readonly, retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (struct CGPoint)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2;
- (struct CGRect)draggingSource:(id)arg1 originalFrameForItem:(id)arg2;
- (void)draggingSource:(id)arg1 cleanupItem:(id)arg2;
- (void)draggingSource:(id)arg1 prepareItem:(id)arg2;
- (void)cancelAllOperations:(_Bool)arg1;
- (void)updateDisplayedCellOperationsPriority:(id)arg1;
- (void)updateDisplayedCellsOperationsPriority;
- (id)gridView:(id)arg1 cellAtIndex:(unsigned long long)arg2;
- (long long)numberOfCellsInGridView:(id)arg1;
@property(retain, nonatomic) OFUIGridView *gridView; // @synthesize gridView=_gridView;
- (void)setEditing:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)init;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

