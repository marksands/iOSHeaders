//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUViewModelChangeObserver.h"

@class PUAssetViewModel, PUAssetViewModelChange;

@protocol PUAssetViewModelChangeObserver <PUViewModelChangeObserver>

@optional
- (void)viewModel:(PUAssetViewModel *)arg1 didChange:(PUAssetViewModelChange *)arg2;
@end

