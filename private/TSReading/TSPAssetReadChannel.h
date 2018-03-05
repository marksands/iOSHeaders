//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSUStreamReadChannel.h"

@class ALAssetRepresentation, ALAssetsLibrary, NSObject<OS_dispatch_queue>, NSString;

@interface TSPAssetReadChannel : NSObject <TSUStreamReadChannel>
{
    ALAssetRepresentation *_representation;
    ALAssetsLibrary *_library;
    NSObject<OS_dispatch_queue> *_readQueue;
}

- (void).cxx_destruct;
- (void)close;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithRepresentation:(id)arg1 library:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

