//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXBasicTileAnimationOptions;

@protocol PXBasicTile <NSObject>
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id <NSObject>)arg2;

@optional
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id <NSObject>)arg2 withOptions:(PXBasicTileAnimationOptions *)arg3;
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id <NSObject>)arg2 withOptions:(PXBasicTileAnimationOptions *)arg3;
@end

