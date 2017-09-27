//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUBuffer.h"

@class NSString, NUPixelFormat;

@interface NUBufferAdapter : NSObject <NUBuffer>
{
    CDStruct_d58201db _size;
    NUPixelFormat *_format;
    long long _rowBytes;
    const void *_bytes;
    _Bool _valid;
}

@property(readonly, nonatomic) long long rowBytes; // @synthesize rowBytes=_rowBytes;
@property(readonly, nonatomic) NUPixelFormat *format; // @synthesize format=_format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)invalidate;
- (const void *)bytesAtPoint:(CDStruct_912cb5d2)arg1;
@property(readonly, nonatomic) const void *bytes;
- (id)init;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 rowBytes:(long long)arg3 bytes:(const void *)arg4;
- (id)initWithBuffer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

