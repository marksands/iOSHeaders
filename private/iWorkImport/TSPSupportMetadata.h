//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableSet, NSObject, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPSupportMetadata : TSPObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_acknowledgedServerData;
    _Bool _isInCollaborationModeForArchiving;
    NSSet *_acknowledgedServerDataForArchiving;
}

- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)takeSnapshotWithCollaborationMode:(_Bool)arg1;
- (id)packageLocator;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)arg1;
- (void)setData:(id)arg1 acknowledgedByServer:(_Bool)arg2;
- (void)isDataAcknowledgedByServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isDataAcknowledgedByServer:(id)arg1;
- (void)resetAcknowledgedServerData;
- (id)initWithContext:(id)arg1;
- (void)commonInit;

@end

