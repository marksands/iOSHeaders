//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NUMutableBufferImage.h"
#import "NUMutableTextureImage.h"
#import "NUSurfaceImage.h"

@class NURegion;

@protocol NUMutableSurfaceImage <NUSurfaceImage, NUMutableBufferImage, NUMutableTextureImage>
- (void)writeSurfaceRegion:(NURegion *)arg1 withBlock:(void (^)(id <NUSurfaceTile>, _Bool *))arg2;
@end

