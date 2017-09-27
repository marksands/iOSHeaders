//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUViewControllerSpec.h"

#import "PUPhotoEditLayoutDynamicAdaptable.h"

@class NSString;

@interface PUPhotoEditToolControllerSpec : PUViewControllerSpec <PUPhotoEditLayoutDynamicAdaptable>
{
    long long _layoutOrientation;
}

@property(readonly, nonatomic) long long layoutOrientation;
@property(readonly, nonatomic) double standardSideBarWidth;
@property(readonly, nonatomic) double standardBottomBarHeight;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setLayoutOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

