//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSCH3DProjector : NSObject
{
    tmat4x4_3074befe mProjection;
    tmat4x4_3074befe mTransform;
    tmat4x4_3074befe mCombined;
}

+ (id)projectorWithProjection:(const tmat4x4_3074befe *)arg1 transform:(const tmat4x4_3074befe *)arg2;
@property(readonly, nonatomic) const tmat4x4_3074befe *combined; // @synthesize combined=mCombined;
@property(readonly, nonatomic) const tmat4x4_3074befe *transform; // @synthesize transform=mTransform;
@property(readonly, nonatomic) const tmat4x4_3074befe *projection; // @synthesize projection=mProjection;
- (id).cxx_construct;
- (line_190fbfc7)objectSpaceLineFromPoint:(const tvec2_84d5962d *)arg1;
- (id)initWithProjection:(const tmat4x4_3074befe *)arg1 transform:(const tmat4x4_3074befe *)arg2;

@end

