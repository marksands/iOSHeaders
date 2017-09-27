//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, TXRImageInfo, TXROptions, TXRTextureInfo;

@protocol TXRParser <NSObject>
+ (_Bool)handlesData:(NSData *)arg1;
@property(readonly, nonatomic) TXRTextureInfo *textureInfo;
- (_Bool)parseData:(NSData *)arg1 bufferAllocator:(id <TXRBufferAllocator>)arg2 options:(TXROptions *)arg3 error:(id *)arg4;
- (TXRImageInfo *)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
@end

