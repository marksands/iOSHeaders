//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLVertexAttributeDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLVertexAttributeDescriptorInternal : MTLVertexAttributeDescriptor
{
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)arg1;
- (unsigned long long)bufferIndex;
- (void)setFormat:(unsigned long long)arg1;
- (unsigned long long)format;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

