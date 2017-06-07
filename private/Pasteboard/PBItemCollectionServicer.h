//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pasteboard/PBDataProviderProtocol-Protocol.h>

@class NSMutableDictionary, NSString, PBItemCollection;

__attribute__((visibility("hidden")))
@interface PBItemCollectionServicer : NSObject <PBDataProviderProtocol>
{
    NSMutableDictionary *_cleanupQueue_cleanupHandlerByUUID;
    PBItemCollection *_itemCollection;
}

+ (id)newServicerForConnection:(id)arg1 itemCollection:(id)arg2;
@property(retain, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
- (void).cxx_destruct;
- (void)waitForItemRequestsDeliveryCompletion:(CDUnknownBlockType)arg1;
- (void)callCleanupBlockWithUUID:(id)arg1;
- (void)loadRepresentationForItemAtIndex:(unsigned long long)arg1 type:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)helloCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1 itemCollection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

