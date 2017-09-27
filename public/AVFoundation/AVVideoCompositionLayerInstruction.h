//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    AVVideoCompositionLayerInstructionInternal *_layerInstruction;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (void)_setValuesFromDictionary:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (id)dictionaryRepresentationWithTimeRange:(CDStruct_e83c9415)arg1;
- (_Bool)getCropRectangleRampForTime:(CDStruct_1b6d18a9)arg1 startCropRectangle:(struct CGRect *)arg2 endCropRectangle:(struct CGRect *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (void)setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg1 toEndCropRectangle:(struct CGRect)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setCropRectangle:(struct CGRect)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_setCropRectangleRampFromStartCropRectangle:(struct CGRect)arg1 toEndCropRectangle:(struct CGRect)arg2 timeRange:(CDStruct_e83c9415)arg3 selector:(SEL)arg4;
- (_Bool)getOpacityRampForTime:(CDStruct_1b6d18a9)arg1 startOpacity:(float *)arg2 endOpacity:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setOpacity:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 selector:(SEL)arg4;
- (_Bool)getTransformRampForTime:(CDStruct_1b6d18a9)arg1 startTransform:(struct CGAffineTransform *)arg2 endTransform:(struct CGAffineTransform *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;
- (void)setTransformRampFromStartTransform:(struct CGAffineTransform)arg1 toEndTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)setTransform:(struct CGAffineTransform)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_setTransformRampFromStartTransform:(struct CGAffineTransform)arg1 toEndTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3 selector:(SEL)arg4;
- (void)_setCropRectangleRamps:(id)arg1;
- (void)_setOpacityRamps:(id)arg1;
- (void)_setTransformRamps:(id)arg1;
- (void)setTrackID:(int)arg1;
@property(readonly, nonatomic) int trackID;
- (void)finalize;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

