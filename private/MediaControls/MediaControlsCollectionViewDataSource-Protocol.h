//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPCPlayerPath, MediaControlsCollectionViewController, UIViewController, UIViewController<MediaControlsCollectionItemViewController>;

@protocol MediaControlsCollectionViewDataSource <NSObject>
- (UIViewController *)routesViewControllerForPicker:(MediaControlsCollectionViewController *)arg1;
- (UIViewController<MediaControlsCollectionItemViewController> *)createViewControllerForCollectionViewController:(MediaControlsCollectionViewController *)arg1;
- (MPCPlayerPath *)picker:(MediaControlsCollectionViewController *)arg1 playerPathForIndex:(long long)arg2;
- (long long)numberOfDestinationsInPicker:(MediaControlsCollectionViewController *)arg1;
@end

