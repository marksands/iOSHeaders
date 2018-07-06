//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCKDatabaseStoreCoordinator.h"

@class NSObject<OS_dispatch_queue>;

@interface SCKFauxDatabaseStoreCoordinator : NSObject <SCKDatabaseStoreCoordinator>
{
    id <SCKDatabaseStore> _store;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SCKDatabaseStore> store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)writeZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)readZone:(id)arg1 withAccessor:(CDUnknownBlockType)arg2;
- (void)reloadWithAccessor:(CDUnknownBlockType)arg1;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithDatabaseStore:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <SCKDatabaseStore> underlyingStore;

@end

