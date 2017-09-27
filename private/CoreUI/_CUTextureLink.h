//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXRDataSourceProvider.h"

@class CUINamedTexture, NSString;

__attribute__((visibility("hidden")))
@interface _CUTextureLink : NSObject <TXRDataSourceProvider>
{
    CUINamedTexture *_namedTexture;
    id <TXRBufferAllocator> _bufferAllocator;
}

- (id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (id)provideTextureInfo;
- (void)dealloc;
- (void)setBufferAllocator:(id)arg1;
- (id)bufferAllocator;
- (id)namedTexture;
- (void)setNamedTexture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

