//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import "TSDMagicMoveMatching.h"

@class CALayer, KNSlideBackgroundInfo;

__attribute__((visibility("hidden")))
@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching>
{
    CALayer *mBlackBackgroundLayer;
    _Bool mLayerNeedsUpdate;
    _Bool mFillCanApplyToCALayer;
}

+ (id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureDescription:(id)arg3;
- (id)textureForDescription:(id)arg1;
- (_Bool)wantsToDistortWithImagerContext;
- (id)additionalLayersUnderLayer;
- (void)didUpdateLayer:(id)arg1;
- (_Bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext *)arg1;
@property(readonly) KNSlideBackgroundInfo *slideBackgroundInfo;
- (_Bool)isOpaque;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

