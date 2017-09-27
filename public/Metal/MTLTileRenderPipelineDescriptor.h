//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MTLPipelineBufferDescriptorArray, MTLTileRenderPipelineColorAttachmentDescriptorArray, NSString;

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

// Remaining properties
@property(readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments; // @dynamic colorAttachments;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(nonatomic) unsigned long long rasterSampleCount; // @dynamic rasterSampleCount;
@property(nonatomic) _Bool threadgroupSizeMatchesTileSize; // @dynamic threadgroupSizeMatchesTileSize;
@property(readonly) MTLPipelineBufferDescriptorArray *tileBuffers; // @dynamic tileBuffers;
@property(retain, nonatomic) id <MTLFunction> tileFunction; // @dynamic tileFunction;

@end

