//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUBufferImage-Protocol.h>

@class NSString, NUColorSpace, NUImageLayout, NUPixelFormat, NURegion;
@protocol NUBuffer;

@interface NUBufferImageAdapter : NSObject <NUBufferImage>
{
    NUImageLayout *_layout;
    id <NUBuffer> _buffer;
    NURegion *_validRegion;
    NUColorSpace *_colorSpace;
}

@property(readonly, copy) NURegion *validRegion; // @synthesize validRegion=_validRegion;
@property(readonly) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(readonly) NUImageLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (id)mutablePurgeableImageCopy;
- (id)purgeableImageCopy;
- (id)mutableImageCopy;
- (id)immutableImageCopy;
- (void)readBufferRegion:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(readonly) NUPixelFormat *format;
@property(readonly) CDStruct_912cb5d2 size;
- (id)init;
- (id)initWithBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

