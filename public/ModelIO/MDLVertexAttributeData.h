//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDLMeshBufferMap;

@interface MDLVertexAttributeData : NSObject
{
    MDLMeshBufferMap *_map;
    void *_dataStart;
    unsigned long long _stride;
    unsigned long long _format;
    unsigned long long _bufferSize;
}

@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void).cxx_destruct;
- (id)init;
- (void)setbufferSize:(unsigned long long)arg1;
@property(nonatomic) unsigned long long format;
@property(nonatomic) unsigned long long stride;
@property(nonatomic) void *dataStart;
@property(retain, nonatomic) MDLMeshBufferMap *map;

@end

