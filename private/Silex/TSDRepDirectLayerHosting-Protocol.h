//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class CALayer, NSArray, NSMutableSet, TSDRep;

@protocol TSDRepDirectLayerHosting <NSObject>
- (void)directLayerhostUpdateTopLevelTilingLayers:(NSMutableSet *)arg1 forRep:(TSDRep *)arg2;
- (void)directLayerHostRemoveIfMatchingContainerLayer:(CALayer *)arg1 forRep:(TSDRep *)arg2;
- (void)directLayerHostUpdateWithContainerLayer:(CALayer *)arg1 forRep:(TSDRep *)arg2;

@optional
- (void)directLayerHostUpdateOverlayLayers:(NSArray *)arg1 forRep:(TSDRep *)arg2;
@end

