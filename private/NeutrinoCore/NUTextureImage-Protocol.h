//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NUImage.h"

@class NURegion;

@protocol NUTextureImage <NUImage>
- (void)readTextureRegion:(NURegion *)arg1 withBlock:(void (^)(id <NUTextureTile>, _Bool *))arg2;
@end

